#include<stdio.h>

void main()
{
	FILE *f_1,*f_2;
	
	int a,b,r=0;
	
	f_1 = fopen("k:\\file_1.txt","r");
	f_2 = fopen("k:\\file_2.txt","w");
	
	fscanf(f_1,"%d",&a);

	
	while(a!=0)
	{
		b = a % 10;
		r = r * 10 + b;
		a = a / 10;
	}
	
	fprintf(f_2,"%d",r);
}
