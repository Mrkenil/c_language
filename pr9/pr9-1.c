#include<stdio.h>

struct distancs{
	int inch;
	int feet;
};

void main()
{
	struct distancs a1,a2,a;
	
	printf("Enter inch : ");
	scanf("%d",&a1.inch);
	printf("Enter feet : ");
	scanf("%d",&a1.feet);
	
	
	printf("Enter sec. dis. inch : ");
	scanf("%d",&a2.inch);
	printf("Enter sec. dis. feet : ");
	scanf("%d",&a2.feet);
	
	a.inch = a1.inch + a2.inch;
	a.feet = a1.feet + a2.feet;
	
	do
	{
		if(a.inch>=12)
		{
			a.inch-=12;
			a.feet++;
		}
	}while(a.inch>11);
	
	printf("add. of your enter dis. is %d feet and %d inch",a.feet,a.inch);
}
