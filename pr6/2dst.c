#include<stdio.h>

int main()
{
	int n, len=0;
	
	printf("Enter how many name you enter : ");
	scanf("%d",&n);
	
	char a[n][100],i,j;
	printf("\n----------------\n");
	for(i=0;i<n;i++)
	{
		printf("Enter name %d : ",i);
		scanf("%s",&a[i]);
	}
	printf("\n----------------\n");
	for(i=0;i<n;i++)
	{
		puts(a[i]);
		len += strlen(a[i]);
	}
	printf("\n----------------\n");
	printf("lenght of 2D string : %d",len);
}
