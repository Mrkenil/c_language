#include <stdio.h>

main()
{
    int n,i,f;
   
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
     do
    {
	f*=i;
	i++;
    }
     while(i<=n);
    printf("The Factorial of %d is : %d",n,f);
   
}
