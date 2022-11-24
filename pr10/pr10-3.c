#include<stdio.h>

void main()
{
	FILE *e,*o,*p;
	
	e = fopen("K:\\even.txt","a");
	o = fopen("K:\\odd.txt","a");
	p = fopen("K:\\prime.txt","a");
	
	int a,i,k=1;
	
	printf("Enter any number you wont to separate : ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		fprintf(e,"%d\n",a);
	}
	else
	{
		fprintf(o,"%d\n",a);
	}
	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			k=0;
		}
	}
	if(k==1)
	{
		fprintf(p,"%d\n",a);
	}
	
	fclose(e);
	fclose(o);
	fclose(p);
}
