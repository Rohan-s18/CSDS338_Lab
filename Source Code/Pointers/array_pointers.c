//  Author: Rohan Singh
//  29/12/2022
//  This file contains code to demonstrate the equivalence between pointer and arrays in C

//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Method header for a method that will print the values of an array
void print_array(int arr[], int len);

//  Main method
int main(){

    //Creating an array
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    //Printing the array
    print_array(arr,10);

    //You can make a pointer point to any part of the array using the "&" operator to the i-th element
    //To use the pointer as an equivalent to an array, you shoulf point it the first element
    int* arr_ptr;
    arr_ptr = &arr[0];

    //This should work just fine, even though the first argument should be an array
    print_array(arr_ptr,10);

    //You can also make the pointer point midway through the array and use it as a subarray
    int* arr_ptr_2;
    //This array will start from the 5th element 
    arr_ptr_2 = &arr[4];

    //Printing the subbarray
    print_array(arr_ptr_2,6);

    return 0;

}


//  Implementation of print_array method
void print_array(int arr[], int len){
    printf("[");

    //Simple iterative loop
    for(int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }

    printf("]\n");

}


