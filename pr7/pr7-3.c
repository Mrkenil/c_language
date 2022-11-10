#include<stdio.h>
#include<string.h>

len(char a[])
{
	int i ,l=0;
	
	for(i=0;a[i]!=NULL;i++)
	{
		l++;
	}
	printf("Length of sring : %d",l);
}

void main()
{
	char a[100];
	
	printf("Enter any sring : ");
	gets(a);
	
	printf("\n---------------------------\n");
	
	puts(a);
	
	len(a);
}
