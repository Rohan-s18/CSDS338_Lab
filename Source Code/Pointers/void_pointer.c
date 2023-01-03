//  Author: Rohan Singh
//  1/3/2023
//  This file will demonstrate how to use "void pointers" in C


//  Void pointers are pointers that can point to any data type in C (char, int, float, etc.)
//  This is extremely useful if you want to make your code more extensible and flexible, especially in memory allocation
//  We will see how to declare, dereference and operate on void pointers
//  if you are already familiar with type casting in Java, this should be pretty easy for you

//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//  Main method to demonstrate the usage of void pointers
int main(){

    //Void pointer
    void* ptr;

    int x = 11;
    float y =14;

    //This is legal for void* 
    ptr = &y;
    ptr = &x;


    //To dereference pointers, you can't just simply use the "*" operator
    //You will additionally have to cast the void pointer to the correct type
    printf("The value which is pointed by the void pointer is: %d\n",*(int*)ptr);

    ptr = &y;
    printf("The value which is pointed by the void pointer is: %f\n",*(float*)ptr);

    
    //Just like dereferencing, arithmetic operations on void pointers must be done after casting them
    float arr[5] = {45.8,7.6,8.9,9.1,-3.4};
    //Pointing the pointer to the first element of the array
    ptr = arr;  
    //Traversing through the array
    for(int i = 0; i < 5; i++){
        printf("The %dth value of the array is: %f\n",i,*((float*)ptr+i));
    }




    return 0;
}

