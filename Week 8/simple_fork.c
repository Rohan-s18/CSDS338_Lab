//  Author: Rohan Singh
//  1/5/2023
//  This program contains code to demonstrate how forking works 

//  Imports

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

//  The fork() system call creates a child process which is an exact copy of the process whose thread called it.
//  The child takes over from where the fork() was called

//  This method demonstrates the fork() system call
void fork_demo(){

    //1 Parent and 0 Children are here
    //The Parent will create 1 Child after this fork call
    fork();

    //1 Parent and 1 Child are here (2 processes will print this)
    printf("First Statement\n");

    //The 1 Parent and 1 child will create 1 child each (2 grand-children)
    fork();
    //1 Parent and 1 Child and 2 grandchildren are here (4 processes will print this)
    printf("Second Statement\n");

    //The 1 parent, 1 Child and 2 grandchildren will create 1 child each (4 great-grandchildren)
    fork();
    //1 Parent, 1 Child, 2 grandchildren and 4 great-grandchildren are here (8 processes will print this)
    printf("Third Statement\n");

}


//  Main method
int main(){

    //Calling the fork demo
    fork_demo();

    return 0;
}

