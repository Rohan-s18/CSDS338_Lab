//  Author: Rohan Singh
//  5/28/2023
//  Code for Process Call Stack ADT implementation in C++


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


//  Class for implementation of Stack ADT
class Stack{

    //  Private Fields
    private:
    
    //Pointer that points to the base of the stack
    void** base;

    //This is the offset (to get the top of the stack)
    int offset;

    //Public fields and methods
    public:

    //Constructor: Simple initialization
    Stack(){
        offset = 0;
    } 

    //Method to push into stack
    void push(void* x){
        //Adding a new element to the offset value
        void* temp = base+offset;
        temp = x;
        offset++;
    }

    //Method to pop stuff out of the stack
    void* pop(){

        //Empty Stack
        if(offset <= 0)
            return NULL;

        //Reducing the offset
        offset--;

        //Storing the top into a temp variable
        void* temp = base+offset;

        //Returning the temp variable
        return temp;
    }



};


//  Main function for demonstration of a Stack
int main(){

    Stack* test = new Stack();

    
    //Creating the function pointers
    void (*func_ptr1)();

    func_ptr1 = &print_message;


    //Checking the Push method
    test->push(func_ptr1);
    test->push(func_ptr1);
    test->push(func_ptr1);
    test->push(func_ptr1);
    test->push(func_ptr1);

    //Testing the Pop method
    std::cout<<test->pop()<<" ";
    std::cout<<test->pop()<<" ";
    std::cout<<test->pop()<<" ";
    std::cout<<test->pop()<<" ";
    std::cout<<test->pop()<<" \n";



    return 0;
}