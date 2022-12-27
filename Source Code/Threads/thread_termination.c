//  Author: Rohan Singh
//  12/27/2022
//  This source code will demonstrate how to terminate pthreads, note this source code will only work with POSIX

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//  Routing for thread 1
void *t1_routine(){
    for(int i = 0; i < 1000; i++){
        printf("Thread 1 is printing this message\n");
    }
    return NULL;
}

//  Routine for thread 2
void *t2_routine(){
    for(int i = 0; i < 1000; i++){
        printf("Thread 2 is printing this message\n");
    }
    return NULL;
}

int main(){

    //The 2 threads
    pthread_t t1, t2;

    //Setting up the thread 1
    pthread_create(
        &t1,                //Thread id
        NULL,               //Thread attributes
        t1_routine,         //Thread routine
        NULL                //Arguments
    );

    //This function waits until the specified thread (t1) terminates
    pthread_join(t1,0);

    //Setting up thread 2
    pthread_create(
        &t2,                //Thread id
        NULL,               //Thread attirbutes
        t2_routine,         //Thread routine
        NULL                //Arguments
    );

    
    pthread_join(t2,0);

    return 0;

}


