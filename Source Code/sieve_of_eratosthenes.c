#include <stdio.h>

const int nprimes = 100;
int prime[nprimes];

int main() { 
	int i;
	int current = 2;
	prime[0] = current;
	for (i=1; i<nprimes; i++) {
		int j; 
		NewCandidate:
			current++;
			for (j=0; prime[j]*prime[j] <= current; j++){
				if (current % prime[j] == 0) goto NewCandidate;
			}
      			prime[i] = current;
   	}
	for(int k = 0; k < nprimes; k++)
		fprintf(stdout,"Prime number %d is: %d\n",k+1,prime[k]);
	return 0; 
}
