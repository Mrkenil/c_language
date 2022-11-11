#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	int *p1 = &n;
	
	printf("Square of your enter number : %d",*p1 * *p1);
}
