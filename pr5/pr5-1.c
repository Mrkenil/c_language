#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter how many elements in array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
}
