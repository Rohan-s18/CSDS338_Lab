//  Author: Rohan Singh
//  1/4/2023
//  This code will demonstrate how pointers to functions work in C

//  Imports
#include <stdio.h>
#include <stdlib.h>


//  Functions

//  Simple function to print hello world
void print_message(){
    printf("Hello World!\n");
}

//  Function to get the factorial of the input integer
int factorial(int x){
    if(x < 2)
        return 1;

    int fact = x;
    while(x-- > 1){
        fact *=x;
    }

    return fact;
}


//  Main method for demonstration
int main(){



    return 0;
}

