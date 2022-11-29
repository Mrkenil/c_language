#include<conio.h>
#include<stdio.h>
main()
{
 int i,n;
 clrscr();
 i=2000;
 n=3000;
 do
 {
   if(i%4==0)
   {
   printf("%d\t",i);
   }
   i++;
 }
 while(i <= n);

 getch();
 }