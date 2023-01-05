#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    fprintf(stdout,"We are in simple_exec.c!\n");
    //Printing the Process id of the process
    fprintf(stdout,"The PID of simple_exec.c is: %d\n",getpid());

    fprintf(stdout,"\n\n");

    //Calling the execv() system call
    execv("./simple",NULL);


    /*
    In Exec System Calls the address space of the original process is replaced by the new process
    So Anything below the execv() call will not be executed
    In pocas palabrasm the print statements below will not be executed
    */

    fprintf(stdout,"\n\n");
    fprintf(stdout,"We are back in simple_exec.c!\n");

    return 0;

}