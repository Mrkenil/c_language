#include<stdio.h>

void main()
{
	FILE *k;
	
	k = fopen("k:\\ke.txt","a");
	
	int a;
	char s[50];
	
	printf("Enter any number you wont to save : ");
	scanf("%d",&a);
	
	printf("Enter any string you wont to save : ");
	scanf("%s",&s);
	
	fprintf(k,"%d\n",a);
	fprintf(k,"%s\n",s);
	
	fclose(k);
	
}
