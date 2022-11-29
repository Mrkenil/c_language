#include<stdio.h>

void main()
{
	FILE *f1,*f2;
	
	char name[100];
	
	f1 = fopen("K:\\kenil git\\ch14\\f1.txt","r");
	f2 = fopen("K:\\kenil git\\ch14\\f2.txt","a");
	
	fscanf(f1,"%s",&name);
	
	printf("name in side of file : %s",name);
	
	fprintf(f2,"%s",name);
	
	fclose(f1);
	fclose(f2);
	
}
