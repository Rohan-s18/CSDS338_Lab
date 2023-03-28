//  Author: Rohan Singh
//  5/28/2023
//  Code for Process Queue ADT implementation in C++


//  Imports
#include <iostream>
#include <cstdlib>



//  Some Functions that we will be adding to the Stack
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


class Queue{

};


//  Main function to test the code
int main(){

    return 0;
}
