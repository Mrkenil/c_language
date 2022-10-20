#include<stdio.h>

main()
{
	int i, j ,n,count;
	
	printf("Enter how many elements in array : ");
	scanf("%d",&n);
	
	int a[n],f[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		f[i]=-1;
	}
	
	for(i=0;i<n;i++)
	{
		count = 1;
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				count++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=count;
		}
	}
	printf("\nfrequency of all elements : \n");
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
		{
			printf("frequency of %d is %d\n",a[i],f[i]);
		}
	}
}
