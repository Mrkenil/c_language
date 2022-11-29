#include<conio.h>
#include<stdio.h>
main()
{
  int n;
  clrscr();
  printf("enter the number : ");
  scanf("%d",&n);

  do
  {
   printf("%d\n",n);
   n--;
  }
  while(1<=n);
  getch();
}