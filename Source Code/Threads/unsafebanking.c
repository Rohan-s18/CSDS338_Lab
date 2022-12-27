//  Author: Rohan Singh
//  12/26/2022
//  This program will demonstrate what happens when multiple threads access/modify the same data structure

//  In this program, Ali and Mariel are 2 threads that have a joint bank account
//  Mariel is the responsible one and deposits money to the account
//  Ali is the freeloader and withdraws the money from the account
//  The initial deposit is $0
//  Mariel makes 1000000 deposits of $1000 each
//  Ali makes 1000000 withdrawls of $1000 each
//  At the end, the final deposit should be 0 (equal credit and debit)

//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//  Global p_threads
pthread_t ali, mariel;

//  Bank balance
int* balance;

//  Method for withdrawing $100
void withdraw(){
    //  Decreasing the bank balance by $100
    (*balance) -= 100;
}

//  Method for depositing $100
void deposit(){
    //  Increasing the bank balance by $100
    (*balance) += 100;
}


//  This method is the withdraw routine that Ali will use
void *alis_routine(){

    //Withdrawing money
    for(int i = 0; i < 10000000; i++){
        withdraw();
    }

    return NULL;
}

//  This method is the deposit routine that Mariel will use
void *mariels_routine(){

    //Withdrawing money
    for(int i = 0; i < 10000000; i++){
        deposit();
    }

    return NULL;
}


//  Main method
int main(){

    //initializing the balance
    balance = malloc(sizeof(int));

    //Creating the threads for Ali and Mariel
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

    printf("The balance is: %d\n",*balance);

    return 0;

}