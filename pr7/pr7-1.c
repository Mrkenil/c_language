#include<stdio.h>

fact(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}

void main()
{
	int n , f;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	f = fact(n);
	
	printf("factorial of %d : %d",n,f);
}
