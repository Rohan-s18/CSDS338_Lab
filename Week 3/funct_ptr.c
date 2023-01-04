//  Author: Rohan Singh
//  1/4/2023
//  This code will demonstrate how pointers to functions work in C

//  Unlike normal pointers, a function pointer points to code, not data. 
//  Just how a normal pointer points to the start of the data segment a function pointer stores the start of executable code.
//  Since the executable code is not stored in the heap, we do not allocate de-allocate memory using function pointers.

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

    //Function pointers must be of the same type as the return type
    void (*func_ptr1)();

    //Refering the pointer to the memory address of the function
    func_ptr1 = &print_message;

    //Invoking the method pointed by the pointer
    (*func_ptr1)();

    //Printing the location of the executable code
    printf("The location of the executable code is: %p\n",func_ptr1); 
    


    //Function pointers must match the parameter types
    int (*func_ptr2)(int);

    //Refering the pointer to the memory address of the function
    func_ptr2 = &factorial;

    //Invoking the method pointed by the pointer (arguments must match the parameter types)
    int x = (*func_ptr2)(10);

    printf("The value of 10! is: %d\n",x);

    //Printing the location of the executable code
    printf("The location of the executable code is: %p\n",func_ptr2); 


    return 0;
}

