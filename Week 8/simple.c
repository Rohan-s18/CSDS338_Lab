#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    
    fprintf(stdout,"We are in simple.c!\n");
    //Printing the Process id of the process
    fprintf(stdout,"The PID of simple.c is: %d\n",getpid());

    return 0;
}