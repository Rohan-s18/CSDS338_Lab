//Author: Rohan Singh

#include <stdio.h>

int main(){
	
	int n = 10;

	int sum = 0;
	
	//Code for calculating the sum of 'n' integers using a for-loop:-
	//Format of for loop is the same as Java:- intial condition, stopping condition, update function
	for(int i = 1; i <= 10; i++){
		sum += i;
	}
	printf("The sum of the first %d integers is: %d\n",n,sum);

	//Code for calculating the sum of 'n' integers using a while-loop:- 
	sum = 0;
	int ct = 1;
	//Format of a while-loop is the same as Java:- while (condition)
	while(ct <= n){
		sum += ct;
		ct++; 		//Remember to update the variables in while loops!
	}
	printf("The sum of the first %d integers is: %d\n",n,sum);

	//Code for calculating the sum of 'n' integers using a do-while loop:-
	sum = 0;
	ct = 1;
	//Format do{ block} while(condition);
	do{
		sum += ct;
		ct++;
	}while(ct <= n);		//Remember, the conditions might differ between while and do-while loops
	printf("The sum of the first %d integers is: %d\n",n,sum);

	
	//------------------------------------------------End of Demo--------------------------------------------

	//Write down code to calculate n! using for, while and do-while loops and then print out the results.  


	return 0;
	
	



}
