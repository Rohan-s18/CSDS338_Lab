//  Author: Rohan Singh
//  12/26/2022
//  This program will demonstrate what happens when multiple threads access/modify the same data structure

//  In this program, Ali and Mariel are 2 threads that have a joint bank account
//  Mariel is the responsible one and deposits money to the account
//  Ali is the freeloader and withdraws the money from the account
//  The initial deposit is $0
//  Mariel makes 1000000 deposits of $100 each
//  Ali makes 1000000 withdrawls of $100 each
//  At the end, the final deposit should be $0equal credit and debit)

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
    for(int i = 0; i < 1000000; i++){
        withdraw();
    }

    return NULL;
}

//  This method is the deposit routine that Mariel will use
void *mariels_routine(){

    //Withdrawing money
    for(int i = 0; i < 1000000; i++){
        deposit();
    }

    return NULL;
}


//  Main method
int main(){

    //initializing the balance
    balance = malloc(sizeof(int));

    //Creating the threads for Ali and Mariel
    pthread_create();
    pthread_create();

    return 0;

}