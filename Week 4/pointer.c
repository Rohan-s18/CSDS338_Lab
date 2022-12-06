//Author: Rohan Singh

#include <stdio.h>

int main(){
	//Creating an integer x
	int x = 5;

	//Creating a pointer 'p' that points to the integer x, the ampersand operator returns the address of the variable 'x'
	int* p = &x;

	//You access the value of the variable 'x' that the pointer 'p' points to by using the "*" (unary operator)
	printf("The value of of the variable is: %d\n",*p);

	//You can find the address of the variable 'x' stored in the pointer 'p' by simply printing it
	printf("The address of the variable is: %p\n",p);

	//You can also find the address of the pointer by using "&" (ampersand operator)
	printf("The address of the pointer is: %p\n",&p);	

	return 0;
}
