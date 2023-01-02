//  Author: Rohan Singh
//  1/2/2023
//  This file contains source code for the scanning and fileprinting functions in C that are more useful
//  Using this code you will be able to read process memory maps using C

//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//  Main method for demonstration
int main(){

    //Creating a file pointer    
    FILE *fp_read;

    //Refering it to the file that we need to read
    fp_read = fopen("/mem_map_linux.txt","r");

    //Checking if it was unsuccessful
    if(!fp_read){
        printf("File not found :/");
        return 1;
    }

    //String for the current line
    char* curr_line;

    //Creating a filepointer for the file we need to write in
    FILE* fp_write;
    fp_write = fopen("/stats.txt","w");

    //Checking if it was unsuccessful
    if(!fp_write){
        printf("Oopsie Poopsie :/");
        return 1;
    }

    //This is where shit gets real (Actually Reading the file)
        
    
    
    


    return 0;

}