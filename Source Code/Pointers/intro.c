//  Author: Rohan Singh
//  29/12/2022
//  This file contains code to demonstrate the working of pointers and references in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//  Main method to demonstrate how to use pointer
int main(){

    int x = 7;

    //Declaring a pointer
    int *ptr;

    //The '&' operator returns the address location of the vairable
    //We are assigning the address location of the variable 'x' to the pointer 'ptr'
    ptr = &x;

    //Printing the value of the variable
    printf("The value of the variable is: %d\n",x);

    //Printing the address of the variable (pointer)
    printf("The address pointed by the pointer is:%p\n",ptr);

    //To get the value of the object that the pointer points to, use the "*" operator
    //The "*" operator is known as the dereferencer  
    printf("The value of the object that the pointer points to is: %d\n",*ptr);

    //Printing the address of the pointer
    printf("The address of the pointer is: %p\n",&ptr);
    

    return 0;
}

