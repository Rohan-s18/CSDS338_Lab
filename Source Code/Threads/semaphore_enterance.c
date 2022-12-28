//  Author: Rohan Singh
//  12/27/2022
//  This code will demonstrate how semaphore flags work in C

//  In this code there are 2 people living in the same suite: Alden (my super cool suitemate) and Rohan 
//  It works something like this:
//  Alden goes to the bathroom (only one person can use the bathroom at a time)
//  Midway through his poo-break Rohan needs to take a dump
//  Since their can only be one person on the bowl, Rohan has to wait for a signal (Semaphore flag) that Alden is done pooping


//  There will be two types of code: 
//  1) Without Semaphores where Rohan and Alden are using the bathroom simultaneously (wrong)
//  2) With Semaphores where Rohan waits for Alden to leave


//  You can use these Semaphores for non-bathroom related examples, in this patticular example the bathroom is the shared resource

//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

//  Semaphore Flag
sem_t bathroom_flag;

//  Routine for Non-semaphore bathroom use for Alden
void *non_semaphore_alden(){

    printf("Alden has entered the bathroom\n");

    //Critical Section
    sleep(4);

    //Leaving the bathroom
    printf("Alden has left the toilet\n");

    return NULL;

}

//  Routine for semaphore bathroom use for Alden
void *semaphore_alden(){

    //Waiting
    sem_wait(&bathroom_flag);

    printf("Alden has entered the bathroom\n");

    //Critical Section
    sleep(4);

    //Leaving the bathroom
    printf("Alden has left the toilet\n");
    sem_post(&bathroom_flag);

    return NULL;

}


//  Routine for Non-semaphore bathroom use for Rohan
void *non_semaphore_rohan(){

    printf("Rohan has entered the bathroom\n");

    //Critical Section
    sleep(4);

    //Leaving the bathroom
    printf("Rohan has left the toilet\n");

    return NULL;

}

//  Routine for semaphore bathroom use for Rohan
void *semaphore_rohan(){

    //Waiting
    sem_wait(&bathroom_flag);

    printf("Rohan has entered the bathroom\n");

    //Critical Section
    sleep(4);

    //Leaving the bathroom
    printf("Rohan has left the toilet\n");
    sem_post(&bathroom_flag);

    return NULL;

}


//  Main method
int main(){

    //Threads
    pthread_t alden_1, rohan_1, alden_2, rohan_2;

    //Here is the non-semaphore demonstration:
    printf("\nNon-semahore demonstration:\n");

    pthread_create(
        &alden_1,
        NULL,
        non_semaphore_alden,
        NULL
    );

    //Rohan enters midway 
    sleep(2);

    pthread_create(
        &rohan_1,
        NULL,
        non_semaphore_rohan,
        NULL
    );

    pthread_join(alden_1, NULL);
    pthread_join(rohan_1, NULL);

    //Here is the semaphore demonstration
    printf("\n\nSemaphore demonstration:\n");

    //Intializing the semaphore
    sem_init(&bathroom_flag, 0, 1);

    pthread_create(
        &alden_2,
        NULL,
        semaphore_alden,
        NULL
    );

    //Rohan enters midway 
    sleep(2);

    pthread_create(
        &rohan_2,
        NULL,
        semaphore_rohan,
        NULL
    );

    pthread_join(alden_2, NULL);
    pthread_join(rohan_2, NULL);

    sem_destroy(&bathroom_flag);

    return 0;
}


