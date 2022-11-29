#include<conio.h>
#include<stdio.h>
main()
{
 int i,n;
 clrscr();
 printf("Enter the value of n : ");
 scanf("%d",&n);
 i=1;
  do
 {
  if(i%2==1)
  {
   printf("%d\t",i);
  }
  i++;
 }
 while(i <= n);
 getch();
 }