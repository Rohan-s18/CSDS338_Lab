//  Author: Rohan Singh
//  5/28/2023
//  Code for Process Call Stack ADT implementation in C++


//  Definitions
#define MAX 100
#define FACT 10

//  Imports
#include <iostream>
#include <cstdlib>



//  Some Functions that we will be adding to the Stack
//  Functions

//  Simple function to print hello world
void print_message(){
    std::cout<<"Hello World!\n";
}

//  Function to get the factorial of the input integer
void factorial(){
    int x = FACT;
    if(x < 2)
        std::cout<<"The factorial of "<<x<<" is 1\n";

    int fact = x;
    while(x-- > 1){
        fact *=x;
    }

    std::cout<<"The factorial of "<<x<<" is "<<fact<<"\n";

    
}


//  Class for implementation of Stack ADT
class Stack{

    //  Private Fields
    private:
    
    //Pointer that points to the base of the stack
    void (*base[MAX]);

    //This is the offset (to get the top of the stack)
    int offset;

    //Public fields and methods
    public:

    //Constructor: Simple initialization
    Stack(){
        offset = 0;
    } 

    //Method to push into stack
    void push(void (*func)()){
        //Adding a new element to the offset value
        //void(*temp)() = base[offset]();
        //temp = func;
        //offset++;
    }

    //Method to pop stuff out of the stack
    void pop(){

        //Empty Stack
        if(offset <= 0)
            return;

        //Reducing the offset
        offset--;

        //Storing the top into a temp variable
        //*(base+offset)();

        //Returning the temp variable
        //return temp;
    }



};


//  Main function for demonstration of a Stack
int main(){

    Stack* test = new Stack();

    
    //Creating the function pointers
    void (*func_ptr1)();

    func_ptr1 = &print_message;


    void (*func_ptr2)();

    func_ptr1 = &factorial;


    //Checking the Push method
    test->push(func_ptr1);
    test->push(func_ptr1);
    test->push(func_ptr1);
    test->push(func_ptr1);
    test->push(func_ptr1);

    //Testing the Pop method
    std::cout<<"Popping the methods off of the call stack";
    test->pop();
    test->pop();
    test->pop();
    test->pop();
    test->pop();

    /*
    void(*base[MAX]);
    base[0] = &factorial;
    base[1] = &print_message;

    base[0]();
    base[1]();
    */

   void (*F_A[2])() = {&factorial,&print_message};

   F_A[1]();
   F_A[2](); 

    return 0;
}