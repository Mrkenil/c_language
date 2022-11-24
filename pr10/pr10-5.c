#include<stdio.h>

void main()
{
	FILE *kf,*mf;
	
	char a[50];
	
	kf = fopen("k:\\k.txt","r");
	mf = fopen("k:\\m.txt","w");
	
	fscanf(kf,"%[^\n]",&a);
	
	fprintf(mf,"%s",a);
	
	fclose(kf);
	fclose(mf);
}
