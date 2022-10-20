#include<stdio.h>

main()
{
	int n, i;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d \n",i,a[i]);
	}
	
	int pos, v,k;
	do
	{
	 printf("\n-----------------------\n");
	 printf("press 1 for insert");
   	 printf("\npress 2 for update");
	 printf("\npress 3 for delete");
	 printf("\npress 4 for exit");
	 printf("\n-----------------------\n");
     printf("Enter your choice : "); 
     scanf("%d",&k);
     
     switch(k)
     {
     	case 1 : 
     	         printf("Enter position : ");
     	         scanf("%d",&pos);
     	         printf("Enter position value : ");
     	         scanf("%d",&v);
	             printf("\n-----------------------\n");
     	         for(i=n-1;i>=pos;i--) 
				 {
				 	a[i+1] = a[i];
			     }    	         
			     n++;
			     a[pos] = v;
			     for(i=0;i<n;i++)
				 {
		            printf("a[%d] : %d \n",i,a[i]);
	             }
	             break;
     	case 2 : 
     	         printf("Enter position : ");
     	         scanf("%d",&pos);
     	         printf("Enter position value : ");
     	         scanf("%d",&v);
	             printf("\n-----------------------\n");
			     a[pos] = v;
			     for(i=0;i<n;i++)
				 {
		            printf("a[%d] : %d \n",i,a[i]);
	             }
	             break;
	    
     	case 3 : 
     	         printf("Enter position : ");
     	         scanf("%d",&pos);
	             printf("\n-----------------------\n");
     	         for(i=pos;i<n;i++) 
				 {
				 	a[i] = a[i+1];
			     }    	         
			     n--;
			     for(i=0;i<n;i++)
				 {
		            printf("a[%d] : %d \n",i,a[i]);
	             }
	             break;
	    
     	case 4 : 
     	         break;
	 }
    }while(k!=4);
}
