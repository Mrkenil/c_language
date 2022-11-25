
#include<stdio.h>
struct emp {
    int eid,bs;
	int hra,dt,ta,gs;
    char name[50],dept[20];
    
};


void main() {
	FILE *fp;
	fp = fopen("K:\\emp_se.txt","w");
	int n;
	printf("Enter a number of employe : ");
	scanf("%d",&n);
    struct emp a[n];
    int i,r_hra = 10,r_ta = 8,r_dt = 7;
    
	
    for(i=0;i<n;i++)
    {
		system("cls");
		printf("Employee %d\n",i+1);
        printf("Enter employee Id no. :");
        scanf("%d", &a[i].eid);
        printf("Enter employee name :");
        scanf("%s",&a[i].name);
        printf("Enter employee department :");
        scanf("%s",&a[i].dept);
        printf("Enter employee base salary :");
        scanf("%d", &a[i].bs);
    }
    
    system("cls");
	printf("percentage\n\n");
	for (i=0;i<n;i++){
		a[i].hra=(a[i].bs*r_hra)/100;
	    a[i].dt=(a[i].bs*r_dt)/100;
     	a[i].ta=(a[i].bs*r_ta)/100;
		 a[i].gs =a[i].bs + a[i].hra + a[i].dt + a[i].ta;
	}  
	system("cls");
	fprintf(fp,"eid\tname\tdept\tbs\tr_hra\tr_dt\tr_ta\thra\tdt\tta\tgs\n\n");
	for (i=0;i<n;i++){
		fprintf(fp,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%.d\t%d\t%d\t%d\n",a[i].eid,a[i].name,a[i].dept,a[i].bs,r_hra,r_dt,r_ta,a[i].hra,a[i].dt,a[i].ta,a[i].gs);
	} 
  fclose(fp);
}
