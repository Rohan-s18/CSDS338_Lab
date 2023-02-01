#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *fr, *fw;
	fr = fopen("heap_loc.txt","r");
	fw = fopen("heap_stats.txt","w");
	if(!fr)return -1;
	if(!fw)return -1;
	unsigned long long int base, top, size, sum, avg;
	char buff[2048];
	int ct = 0;
	while((fgets(buff,2048,fr))!=NULL){
		ct++;
		sscanf(buff,"%llx-%llx",&base,&top);
		sum+=base;
		size=top-base;
		fprintf(fw,"The size of this heap segment is: %llu\n",size);
	}
	avg = sum/ct;
	fprintf(fw,"\nThe Average Base of the heap segment is: %llu\n",avg);
	return 0;
}
