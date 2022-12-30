//  Author: Rohan Singh
//  29/12/2022
//  This file contains code to demonstrate reference methods in C

//  At this point you might be thinking, why do we need pointers anyways?
//  Well, you see Jimmy, pointers are kinda a big deal in C, especially when it comes to method arguments
//  You see Jimmy, C is pass-by-value, which means that method arguments are merely copies of the value that was inputted
//  So even if you modify the value of the argument within the method, it won't alter the actual value outside it
//  A simple way to get around this problem is to use references to the objects...
//  ... and modifying the variable directly by dereferencing the reference

//  Imports
#include <stdio.h>
#include <stdlib.h>


//  Method to increase the value by 1 using an integer argument
void increase_val(int x){
    x++;
}

//  Method to increase the value by 1 using a pointer argument
void increase_pointer_val(int* ptr){
    (*ptr)++;
}

int main(){

    //Declaring 2 ints
    int x = 7;
    int y = 7;

    printf("The value of x is: %d\n",x);
    printf("The value of y is: %d\n",y);

    //Using the increase_val method on 'x'
    increase_val(x);

    //Using the increase_pointer_val method on '&y' <- Reference to y
    increase_pointer_val(&y);

    printf("\nIncreasing values...\n\n");

    printf("The value of x is: %d\n",x);
    printf("The value of y is: %d\n",y);

    return 0;

}

