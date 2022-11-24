#include<stdio.h>

void main()
{
	FILE *f;
	
	f = fopen("K:\\f1.txt","r");
	
	char a[50];
	fscanf(f,"%[^\n]",&a);
	
	printf("%s",a);
	
	fclose(f);
}
