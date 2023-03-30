#define _GNU_SOURCE
#include <pthread.h>
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>   // compile with cc count.c -lpthread
int count = 0, currval, atomic = 0, pmlock = 1, swlock = 0;
pthread_mutex_t myptmlock = PTHREAD_MUTEX_INITIALIZER; short myswlock = 0;
int inc(void) { 
  if (pmlock) if (pthread_mutex_lock(&myptmlock)) printf("ERROR\n");
  if (swlock) { while (myswlock) {}; myswlock = 1; }
  if (atomic) count++; else { currval = count; currval++; sleep(.1); count = currval; }
  if (pmlock) pthread_mutex_unlock(&myptmlock); if (swlock) myswlock = 0; 
  }
int dec(void) { 
  if (pmlock) if (pthread_mutex_lock(&myptmlock)) printf("ERROR\n");
  if (swlock) { while (myswlock) {}; myswlock = 1; }
  if (atomic) count--; else{ currval = count; sleep(.2); currval--; count = currval; }
  if (pmlock) pthread_mutex_unlock(&myptmlock); if (swlock) myswlock = 0; 
  }
int getcount(int *countp) { 
  if (pmlock) if (pthread_mutex_lock(&myptmlock)) printf("ERROR\n");
  if (swlock) { while (myswlock) {}; myswlock = 1; }
  *countp = count;
  if (pmlock) pthread_mutex_unlock(&myptmlock); if (swlock) myswlock = 0; 
  }
void *myThreadFun(void *vargp) {
  inc(); dec(); getcount(&count); printf("%d ",count); 
  }
int main() {
  pthread_t thread_id[2]; char command[80];
  cpu_set_t mask; CPU_ZERO(&mask); CPU_SET(0, &mask); sched_setaffinity(0, sizeof(mask), &mask);
   
  sched_getaffinity(0, sizeof(mask), &mask);
  int nproc = sysconf(_SC_NPROCESSORS_ONLN);
  printf("sched_getaffinity = ");
  for (int i = 0; i < nproc; i++) {
    printf("proc #%d (of %d) set to %d ; ", i, nproc, CPU_ISSET(i, &mask));
  }
  printf("\n");
  
  for (int i=0; i<2; i++) pthread_create(&(thread_id[i]), NULL, myThreadFun, NULL);
  for (int i=0; i<2; i++) pthread_join(thread_id[i], NULL); 
  }
