#include<stdio.h>

struct stud {
	int id;
	char name[30];
	int m;
	int s;
	int e;
	int h;
	int c;
	char gred;
	int total;
};

void main()
{
	FILE *s;
	
	s = fopen("K:\\kenil git\\ch14\\student.txt","a");
	
	int n, i;
	
	printf("Enter number of students : ");
	scanf("%d",&n);
	
	struct stud a[n];
	
	for(i=0;i<n;i++)
	{
		system("cls");
		printf("student %d\n",i+1);
		
		printf("Enter students roll number : ");
		scanf("%d",&a[i].id);
		printf("Enter student name : ");
		scanf("%s",&a[i].name);
		printf("Enter marks of matsh : ");
		scanf("%d",&a[i].m);
		printf("Enter marks of computer : ");
		scanf("%d",&a[i].c);
		printf("Enter marks of English : ");
		scanf("%d",&a[i].e);
		printf("Enter marks of Hindi : ");
		scanf("%d",&a[i].h);
		printf("Enter marks of scince : ");
		scanf("%d",&a[i].s);
		a[i].total = a[i].m + a[i].c + a[i].e + a[i].h + a[i].s;
		printf("Enter student gread : ");
		scanf("%c",&a[i].gred);
	}
	fprintf(s,"id\tname\tmatsh\tcomp\tEnglish\tHindi\tscince\ttotal\tgread");
	fprintf(s,"\n-------\t-------\t-------\t-------\t-------\t-------\t-------\t-------\t-------\t-------\n");
	for(i=0;i<n;i++)
	{
		fprintf(s,"%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",a[i].id,a[i].name,a[i].m,a[i].c,a[i].e,a[i].h,a[i].s,a[i].total,a[i].gred);
	}
}
