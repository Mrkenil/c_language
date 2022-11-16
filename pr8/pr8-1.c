#include<stdio.h>

void main()
{
	int a , b;
	
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	int *p1 = &a;
	int *p2 = &b;
	
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("a : %d\nb : %d",*p1,*p2);
}
