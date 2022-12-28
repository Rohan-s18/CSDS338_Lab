//  Author: Rohan Singh
//  12/27/2022
//  This code will demonstrate how semaphore flags work in C

//  In this code there are 2 people living in the same suite: Alden (my super cool suitemate) and Rohan 
//  It works something like this:
//  Alden goes to the bathroom (only one person can use the bathroom at a time)
//  Midway through his poo-break Rohan needs to take a dump
//  Since their can only be one person on the bowl, Rohan has to wait for a signal (Semaphore flag) that Alden is done pooping

//  You can use these Semaphores for non-bathroom related examples, in this patticular example the bathroom is the shared resource

//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

//  Semaphore Flag
sem_t bathroom_flag;


//  Routine for Alden
void* aldens_routine(){

    //Waiting
    sem_wait(&bathroom_flag);

    printf("Alden has entered the bathroom\n");

    //Critical Section
    sleep(4);

    //Leaving the bathroom
    printf("Alden has left the bathroom\n");
    sem_post(&bathroom_flag);

    return NULL;

}


//Routine for Rohan 
void* rohans_routine(){
    
    //Waiting
    sem_wait(&bathroom_flag);

    printf("Rohan has entered the bathroom\n");

    //Critical Section
    sleep(4);

    //Leaving the bathroom
    printf("Rohan has left the bathroom\n");
    sem_post(&bathroom_flag);

    return NULL;

}


//  Main Method
int main(){

    //Threads 
    pthread_t rohan, alden;

    //Intializing the semaphore flag
    sem_init(&bathroom_flag, 0, 1);

    //Intializing Alden
    pthread_create(
        &alden,
        NULL,
        aldens_routine,
        NULL
    );

    //Rohan Enters midway
    sleep(2);

    //Initializing Rohan
    pthread_create(
        &rohan,
        NULL,
        rohans_routine,
        NULL
    );

    //Terminating the threads
    pthread_join(alden,NULL);
    pthread_join(rohan,NULL);

    //Destroying the semaphore
    sem_destroy(&bathroom_flag);

    return 0;
}

