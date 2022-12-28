#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This global variable will be used to store the number of prime numbers that we need
int nprimes;

//This pointer will be used to store all of the 'nprimes' prime numbers
int *prime;

/*
int argc: This tells us how many command line arguments are passed, the intial value is 1 (name of process)
char *argv[]: This is the array of strings containing the command line arguments
*/
int main(int argc, char *argv[]) {

	//Getting the number of primes from the command line arguments
	nprimes = atoi(argv[1]);

	/* 
	Intiliazing the array:
	malloc(nprimes*sizeof(int)): This will allocate nprimes*(sizeof(int)) amount of memory to the process
	(int *) : This means that the allocated memory will be used as a pointer to ints, which you may by this point know means it is an array of ints
	*/
	prime = (int *)malloc(nprimes*sizeof(int)); 

	int current = 2;
	prime[0] = current;

	//This segment of code is not really useful for the purposes of the course 
	for (int i=1; i<nprimes; i++) {
		NewCandidate:
			current++;
			for (int j=0; prime[j]*prime[j] <= current; j++){
				if (current % prime[j] == 0) 
					goto NewCandidate;
			}
      		prime[i] = current;
   	}
	for(int k = 0; k < nprimes; k++)
		fprintf(stdout,"Prime number %d is: %d\n",k+1,prime[k]);
	return 0; 
}


