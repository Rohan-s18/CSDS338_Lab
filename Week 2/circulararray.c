//  Author: Rohan Singh
//  12/4/2022
//  This code will demonstrate the implementation of a FIFO queue in C using an Array

#include <stdio.h>
#include <stdlib.h>

//  Method Headers for the add and poll methods of the circular array
int add(int x);
int poll();

//  Global variables for the circular queue
int arr[10];
int size;
int rear;
int head;


//  Main method
int main(){
	size = 0;
	rear = 0;
	head = 0;

	//Adding elements to the circular queue
	add(10);
	add(9);
	add(8);
	add(17);
	add(-5);

	//Polling the elements
	printf("The polled element is: %d\n",poll());
	printf("The polled element is: %d\n",poll());
	printf("The polled element is: %d\n",poll());
	printf("The polled element is: %d\n",poll());
	printf("The polled element is: %d\n",poll());

	return 0;
}


// Implementation of the add method
int add(int x){

	//Checking if it is full
	if(size == (*(&arr+1) - arr)) 
		return 0;

	//Adding  to the rear
	arr[rear] = x;

	//Updating the size
	size++;

	//Updating the rear
	rear = (rear+1)%(*(&arr+1) - arr);
	return 1;
}

//  Implementation of the poll method
int poll(){

	//Checking if it is empty
	if(size == 0)
		return 0;

	//Getting the variable
	int temp = arr[head];

	//Reducing the size
	size--;

	//Updating the head
	head = (head+1)%(*(&arr+1) - arr);
	return temp;
}

