#include<stdio.h>

void main()
{
	FILE *f;
	
	f = fopen("K:\\f1.txt","a");
	
	fprintf(f,"i am kenil");
	
	fclose(f);
}
