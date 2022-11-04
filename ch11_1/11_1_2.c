#include<stdio.h>
cube(a)
{
	printf("cube of %d = %d",a,a*a*a);
}
main()
{
	int n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	cube(n);
}
