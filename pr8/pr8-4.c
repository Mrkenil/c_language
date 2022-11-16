#include<stdio.h>
#include<string.h>

void main()
{
	char a[100];
	
	printf("Enter any string : ");
	gets(a);
	
	char *p[100],i ,len = 0;
	
	for(i=0;i<strlen(a);i++)
	{
		p[i] = &a[i];
		len++;
	}
	printf("\n------------\n");
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",*p[i]);
	}
	printf("\n\nlength of string : %d",len);
}
