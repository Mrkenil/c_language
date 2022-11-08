#include<stdio.h>

void div(int a,int b)
{
	printf("%d // %d = %d",a,b,a/b);
}

void mul(int a,int b)
{
	printf("%d x %d = %d",a,b,a*b);
}

void sub(int a,int b)
{
	printf("%d - %d = %d",a,b,a-b);
}

void add(int a,int b)
{
	printf("%d + %d = %d",a,b,a+b);
}

calc(int a,int b)
{
	int n;
	printf("\nEnter 1 for add");
	printf("\nEnter 2 for sub");
	printf("\nEnter 3 for mul");
	printf("\nEnter 4 for div");
	printf("\nEnter 5 for exit");
	printf("\nEnter what do you wont : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1 :
			add(a,b);
			printf("\n-------------------\n");
			main();
			break;
		case 2 :
			sub(a,b);
			printf("\n-------------------\n");
			main();
			break;
		case 3 :
			mul(a,b);
			printf("\n-------------------\n");
			main();
			break;
		case 4 :
			div(a,b);
			printf("\n-------------------\n");
			main();
			break;		
		case 5 :
		    break;	
	}
}

void value()
{
	int a , b;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	calc(a,b);
}

void main()
{
	value();
}
