#include<stdio.h>

main()
{
	int n, i;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n----------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n----------------------------\n");
	printf("right side : \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n----------------------------\n");
	printf("left side : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}
