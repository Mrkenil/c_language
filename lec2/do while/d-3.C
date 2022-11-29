#include<conio.h>
#include<stdio.h>
main()
{
  int i,n;
  clrscr();
  printf("enter the number : ");
  scanf("%d",&n);
  i=1;
  do
  {
   printf("%d\n",i);
   i++;
  }
  while(i<=n);
  getch();
}