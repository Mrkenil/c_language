#include <stdio.h>
#include <conio.h>
 main()
{
   int n, i;
   clrscr();
    printf("Enter a Number ");
    scanf("%d",&n);
    for(i=1;i<=10;++i)
    {
	printf("%d * %d = %d \n", n, i, n*i);
    }

    getch();

}