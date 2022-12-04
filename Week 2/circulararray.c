//Author: Rohan Singh

#include <stdio.h>

int add(int x);
int poll();

int arr[10];
int size;
int rear;
int head;

int main(){
	size = 0;
	rear = 0;
	head = 0;

	//Add your example of queue over here

	return 0;
}

int add(int x){
	if(size == (*(&arr+1) - arr)) 
		return 0;
	arr[rear] = x;
	size++;
	rear = (rear+1)%(*(&arr+1) - arr);
	return 1;
}

int poll(){
	if(size == 0)
		return 0;
	int temp = arr[head];
	size--;
	head = (head+1)%(*(&arr+1) - arr);
	return temp;
}

