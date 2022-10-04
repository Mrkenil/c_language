#include<stdio.h>
#include<conio.h>

main()
{
 int day;
 clrscr();
 printf("enter 1 for select monday\n");
 printf("enter 2 for select tuesday\n");
 printf("enter 3 for select wendsday\n");
 printf("enter 4 for select thusday\n");
 printf("enter 5 for select friday\n");
 printf("enter 6 for select seturday\n");
 printf("enter 7 for select sunday\n");
 printf("select the day : ");
 scanf("%d",&day);
 printf("\n\n----------------------\n\n");
 switch(day)
 {
   case 1 :
	   printf("you select monday");
	   break;
   case 2 :
	   printf("you select tuesday");
	   break;
   case 3 :
	   printf("you select wendsday");
	   break;
   case 4 :
	   printf("you select thusday");
	   break;
   case 5 :
	   printf("you select friday");
	   break;
   case 6 :
	   printf("you select saturday");
	   break;
   case 7 :
	   printf("you select sunday");
	   break;
   default :
	    printf("invelid choice");
 }
 getch();
}