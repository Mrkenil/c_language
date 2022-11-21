#include<stdio.h>

union marks{
	int r_n;
	char name;
	int chem_m;
	int ma_m;
	int phy_m;
	float pr;
};

void main()
{
	union marks a[5];
	
	int i , j;
	
	for(i=0;i<5;i++)
	{
		system("cls");
		printf("student %d\n",i+1);
		
		printf("Enter rool number : ");
		scanf("%d",&a[i].r_n);
		printf("Enter his\\his name : ");
		scanf("%s",&a[i].name);
		printf("Enter Chemistry marks : ");
		scanf("%d",&a[i].chem_m);
		printf("Enter Mathematics marks : ");
		scanf("%d",&a[i].ma_m);
		printf("Enter Physics marks : ");
		scanf("%d",&a[i].phy_m);
		
		j = a[i].chem_m + a[i].ma_m + a[i].phy_m;
		
		a[i].pr = (j*100)/300;

	}
	system("cls");
	for(i=0;i<5;i++)
	{
		printf("percentage of student %d is %0.2f\n",i+1,a[i].pr);
	}
}
