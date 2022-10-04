#include<stdio.h>
#include<conio.h>

main()
{
 char a ;
 clrscr();
 printf("enter any key of keybord : ");
 scanf("%c",&a);
 if(a>='a'&& a<='z')
 {
  printf("your enter small chartaer");
 }
 else if(a>='A'&& a<='Z')
 {
  printf("your enter capetal chartaer");
 }
 else if(a>='0'&& a<='9')
 {
  printf("your enter an digit");
 }
 else
 {
  printf("your enter special character");
 }
 getch();
}