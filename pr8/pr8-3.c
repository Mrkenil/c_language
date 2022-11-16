#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n],i,b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);	
	}
	int *p1[n];
	

	printf("\n--------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		p1[i] = &a[i];
	}
	printf("\n--------------------------\n");
	for(i=0;i<n;i++)
	{
		b[(n-1)-i]= *p1[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
	
}
