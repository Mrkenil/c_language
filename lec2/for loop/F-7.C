#include<conio.h>
#include<stdio.h>
main()
{
 int i,n;
 clrscr();
 n=3000;
 for(i=2000 ;i <= n;i++)
 {
 if(i%4==0)
  {
   printf("%d\t",i);

  }
 }
 getch();
 }