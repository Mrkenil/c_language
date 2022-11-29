#include <stdio.h>
#include <conio.h>
main()
{
    int n,i,f;
    clrscr();
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    for(f=i=1;i<=n;i++)
    {
	f*=i;

    }
    printf("The Factorial of %d is : %d",n,f);
    getch();
}