//Author: Rohan Singh
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <unistd.h>

int count;

int incr();
void *mythreadstart();

int main(){
	pthread_t t1, t2;
	count = 0;
	pthread_create(&t1,NULL,mythreadstart,NULL);
	pthread_create(&t2,NULL,mythreadstart,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	fprintf(stdout,"The value of count is: %d\n",count);
	return 0;
}

void *mythreadstart(){
	for(int i = 0; i < 1000000; i++)
		incr();
	return NULL;
}

int incr(){
	count++;
	return 1;
}


