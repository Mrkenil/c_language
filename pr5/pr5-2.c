#include<stdio.h>

main()
{
	int i , n,n1,n2;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];     
	 
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	} 
	n1 = n2;
	
	for(i=0;i<n;i++)
	{
		if(n1<a[i])
		{
			n2=n1;
			n1=a[i];
		}
		else if(a[i]>n2 && a[i]<n1)
		{
			n2=a[i];
		}
	}
	printf("second lagest number = %d",n2);
}
