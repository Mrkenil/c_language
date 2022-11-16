#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int a[n],i;
	int *p1 = &a;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&*(p1+i));
	} 
	printf("\n-----------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : %d\n",i,*(p1+i));
	}
}
