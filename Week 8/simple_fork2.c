//  Author: Rohan Singh
//  1/5/2023
//  This program contains code to demonstrate how forking works 

//  Imports

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

//  The fork() system call creates a child process which is an exact copy of the process whose thread called it.
//  The child takes over from where the fork() was called
//  fork() returns Zero in the child and the child's process ID (PID) in the parent. 
//  This is one way to see if you are in the parent or child. 

//  This method demonstrates how to differentiate between the child and parent process
void process_check(){

    // child process because return value zero
    if (fork() == 0)
        printf("Hello from Child!\n");
  
    // parent process because return value non-zero.
    else
        printf("Hello from Parent!\n");

}

//  Main method
int main(){

    //Calling the process check method
    process_check();

    return 0;
}

