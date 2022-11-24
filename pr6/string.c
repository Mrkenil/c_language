#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	int n;
	
	printf("enter string a : ");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	n = strcmp(a,b);
	
	printf("string a : ");
	puts(a);
	
	printf("sting b : ");
	puts(b);
	
	printf("comparison : %d\n-------------------------------\n",n);
	(n==0)
	     ? printf("palindrome")
	     : printf("not palindrome");
}
