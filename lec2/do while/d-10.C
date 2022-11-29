#include <stdio.h>
#include <conio.h>
 main()
{
   int n, i;
   clrscr();
    printf("Enter a Number ");
    scanf("%d",&n);
    i=1;
     do
    {
	printf("%d * %d = %d \n", n, i, n*i);
	++i;
    }
     while(i<=10);
    getch();

}
