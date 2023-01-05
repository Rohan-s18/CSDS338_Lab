//  Author: Rohan Singh
//  12/26/2022
//  This code will demonstrate how to create POSIX threads (this code will not work in Windows)

//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


//  This method is the thread routine 
void *server(int arg){

    //Print message to tell which thread is currently active
    for(int i = 0; i < 100; i++)
        printf("This message was printed by thread%d\n",arg);

    return 0;

}

//  This method will create n servers who will do the server task
void start_servers(int n_servers){

    pthread_t thread;
    
    //Starting 'n' servers
    for(int i =0 ; i < n_servers; i++){

        //Creating the thread
        pthread_create(
            &thread,                //Thread id
            0,                      //Thread attributes (use 0 for default)
            server,                 //Thread routine (the server method)
            i                       //Thread routine argument
        );
    }

}


//  Main method
int main(){

    start_servers(10);

    return 0;
}



