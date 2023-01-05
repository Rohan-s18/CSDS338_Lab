//  Author: Rohan Singh
//  12/26/2022
//  This program how to use mutex (Mutual Exclusion) to lock data structures such that only one thread uses them at a time

//  In this program, Ali and Mariel are 2 threads that have a joint bank account
//  Mariel is the responsible one and deposits money to the account
//  Ali is the freeloader and withdraws the money from the account
//  The initial deposit is $0
//  Mariel makes 1000000 deposits of $100 each
//  Ali makes 1000000 withdrawls of $100 each

//  As you might have seen in the unsafe banking example, the balance wasn't always 0, so Ali and Mariel decided to change banks
//  In the safe bank, you can only make a deposit or withdrawl if you have a key (mutex) to the bank (data)


//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//  We will be using this mutex object 
static pthread_mutex_t accountLock = PTHREAD_MUTEX_INITIALIZER;

//  Threads for Ali and Mariel
pthread_t ali, mariel;

//  Account 
int* balance;


//  Safe Withdraw
int withdraw(){
    int error;
    //Error is the falge when pthread_mutex_lock returns an int greater than 0
    if((error = pthread_mutex_lock(&accountLock)))
        return error;

    //This part will only take place if we have access to the mutex object
    (*balance) -= 1000;

    // Returning access of the mutex object
    return pthread_mutex_unlock(&accountLock);
}


//  Safe Deposit
int deposit(){
    int error;
    //Error is the falge when pthread_mutex_lock returns an int greater than 0
    if((error = pthread_mutex_lock(&accountLock)))
        return error;

    //This part will only take place if we have access to the mutex object
    (*balance) += 1000;

    // Returning access of the mutex object
    return pthread_mutex_unlock(&accountLock);
}


//  Routine for Ali
void *alis_routine(){
    //Withdrawing money
    for(int i = 0; i < 100000000; i++){
        withdraw();
    }

    return NULL;
}


//  Routine for Mairel
void *mariels_routine(){
    //Depositing money
    for(int i = 0; i < 100000000; i++){
        deposit();
    }

    return NULL;
}




//  Main method
int main(){

    //Initializing the account balance
    balance = malloc(sizeof(int));

    //Initializing the threads
    pthread_create(
        &ali,
        NULL,
        alis_routine,
        NULL
    );
    pthread_create(
        &mariel,
        NULL,
        mariels_routine,
        NULL
    );

    //Terminating the threads
    pthread_join(mariel,NULL);
    pthread_join(ali,NULL);

    //Checking the account balance
    printf("The account balance is: %d\n",*balance);

    return 0;
}
