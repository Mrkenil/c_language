#include<stdio.h>

main()
{
	int r ,c;
	
	printf("Enter how many row : ");
	scanf("%d",&r);
	
	printf("Enter how many column : ");
	scanf("%d",&c);
	
	int a[r][c] ,i,j;
	
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
	}printf("\n--------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
