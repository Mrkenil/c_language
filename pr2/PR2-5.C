#include<stdio.h>
#include<conio.h>

main()
{
 int unit;
 float gst , bill;
 clrscr();
 printf("enter howmany units you used : ");
 scanf("%d",&unit);
 if(unit<=50)
 {
  bill = unit * 0.50;
 }
 else if(unit<=150)
 {
  bill = (unit-50) * 0.75 + 25;
 }
 else if(unit<=250)
 {
  bill = (unit-150) * 1.20 + 100;
 }
 else if(unit>250)
 {
  bill = (unit-250) * 1.50 + 220;
 }

 gst = bill * 0.20;
 bill = bill + gst;
 printf("your electricety bill is : %.2f",bill);

 getch();
}