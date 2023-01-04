//  Author: Rohan Singh
//  12/4/2022
//  This code will demonstrate the Classic Hello World Code in C

//  Imports
#include <stdio.h>
#include <stdlib.h>


//	This is the main method of C, just like in Java and C++, this will be the first segment added to the stack
int main(){

	//These are Wrong
	//System.out.println("Hello World!\n");
	//print("Hello World!\n");

	//These are Right
	printf("Hello World!\n");
	fprintf(stdout,"Hello World!\n");
	
	//Make a print statement for your name!!!
	printf("My name is: <Your Name>\n");

	//Making a print statement that prints out: "I am *your age* years old!"
	//Initilizing the variable
	int age = 18;
	//The %d is the format for decimal representation of ints
	printf("I am %d years old\n",age);

	return 0;

}
