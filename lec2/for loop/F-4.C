#include<conio.h>
#include<stdio.h>
main()
{
 int i,n;
 clrscr();
 printf("Enter the value of n : ");
 scanf("%d",&n);
 for(i=1;n >= i;--n)
 {
  printf("%d\t",n);
 }
 getch();
 }