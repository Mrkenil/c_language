#include<stdio.h>
div(k)
{
	if(k%3 == 0 && k%5 == 0)
	{
		printf("your enter number is divisible by 3 and 5.");
	}
	else if(k%3 == 0)
	{
		printf("your enter number is divisible by 3.");
	}
	else if(k%5 == 0)
	{
		printf("your enter number is divisible by 5.");
	}
	else
	{
		printf("your enter number is not divisible by 3 and 5.");
	}
}
 int main()
{
	int n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	div(n);
}
