#include <stdio.h> 
  

void order(int n, int p1[]) 
{ 
    int i, j, t; 
  
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(p1 + j) < *(p1 + i)) { 
  
                t = *(p1 + i); 
                *(p1 + i) = *(p1 + j); 
                *(p1 + j) = t; 
            } 
        } 
    } 
} 

int main() 
{ 
    int n;
	
	printf("Enter how many elements in array : ");
	scanf("%d",&n);
	 
    int a[n],i;
	 
    for (i = 0; i < n; i++) 
    {
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);	
	}  
	
    order(n, &a); 
    
    for (i = 0; i < n; i++) 
    {
		printf("%d ", *(a + i));	
	}     

  
  
} 
