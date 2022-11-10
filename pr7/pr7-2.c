#include<stdio.h>

sum(int a[],int n)
{
	int j,s=0;
	for(j=0;j<n;j++)
	{
		s += a[j];
	}
	printf("\n-------------------------------\n");
	printf("sum of all array elements : %d",s);
}

void main()
{
	int n;
	
	printf("Enter length of array : ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	sum(a,n);
}
