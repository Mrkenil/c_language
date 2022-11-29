#include<conio.h>
#include<stdio.h>
main()
{
 int n;
 clrscr();
 printf("Enter the value of n : ");
 scanf("%d",&n);

  do
 {
  if(n%2==0)
  {
   printf("%d\t",n);
  }
  n--;
 }
 while(1 <= n);
 getch();
 }