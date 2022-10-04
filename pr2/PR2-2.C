#include<stdio.h>
#include<conio.h>

main()
{
 int a ;
 clrscr();
 printf("enter any digit : ");
 scanf("%d",&a);
 (a%2==0)
	 ? printf("your enter digit is even")
	 : printf("your enter digit is odd");

 getch();
}