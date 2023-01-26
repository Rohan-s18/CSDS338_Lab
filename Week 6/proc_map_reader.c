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
    //Change the filepath
    fp_read = fopen("/proc/self/maps","r");

    //Checking if it was unsuccessful
    if(!fp_read){
        printf("File not found :/\n");
        return 1;
    }

    //String for the current line
    char curr_line[1000];

    //Creating a filepointer for the file we need to write in (change the filepath)
    FILE* fp_write;

    //Change Filepath
    /*
    fp_write = fopen("/Change File path/stats.txt","w");

    //Checking if it was unsuccessful
    if(!fp_write){
        printf("Oopsie Poopsie :/\n");
        return 1;
    }
    */
    
    //This is where shit gets real (Actually Reading the file)
    //We will be calculating the size of each memory segment and the gap

    //ints to store the high and low address points, size and the previous high
    unsigned long long int low;
    unsigned long long int high;
    unsigned long long int size;
    unsigned long long int prev_high = 0;
    unsigned long long int gap;
    
    //Using the fgets method to get the string for the current line
    while(fgets(curr_line, 1000, fp_read) != NULL){

        //Using the sscanf method to scan the current string for the highs and lows
        //Format of file is hexadecimal, so we willbe using %llx and not %d
        sscanf(curr_line, "%llx-%llx" ,&low ,&high);

        //Calculating the size
        size = high - low;

        //Calculating the gap
        gap = low - prev_high;

        prev_high = high;

        //Writing to the stats file
        fprintf(stdout,"Size of segment: %llu\nGap between segments: %llu\n\n",size,gap);

    }
        
    

    return 0;

}
