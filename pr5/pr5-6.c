#include<stdio.h>

main()
{
	int r ,c;
	
	printf("Enter how many row : ");
	scanf("%d",&r);
	
	printf("Enter how many column : ");
	scanf("%d",&c);
	
	int a[r][c] ,b[r][c], k[r][c],i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n--------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------------\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n--------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
			k[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");
	}
	
	printf("\n--------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",k[i][j]);
		}
		printf("\n");
	}
}
