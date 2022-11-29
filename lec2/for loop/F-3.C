#include<conio.h>
#include<stdio.h>
main()
{
 int i,n;
 clrscr();
 printf("Enter the value of n : ");
 scanf("%d",&n);
 for(i=1;i <= n;++i)
 {
  printf("%d\t",i);
 }
 getch();
 }