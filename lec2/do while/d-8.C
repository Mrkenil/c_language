#include <stdio.h>

main()
 {
    int n, i, sum = 0;
  
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;

    do
     {
	sum += i;
	++i;
     }
    while (i <= n);
    printf("Sum = %d", sum);
  
 }
