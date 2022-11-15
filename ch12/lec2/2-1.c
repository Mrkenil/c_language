#include <stdio.h>
#include <string.h>
 
toggal(char s[])
{
	int i;
	for(i=0;i<strlen(s);i++)  
    {
        if(s[i]>=65 && s[i]<=90)
        {
			s[i]+=32;
		}
        else if(s[i]>=97 && s[i]<=122)
        {
       		s[i]-=32;
    	}
    }
	
} 
 
void main()
{
    char s[100];  
    int i;
 
    printf("Enter  the string : ");
    gets(s);
    
 
    toggal(&s);
   
 	
     
    printf("string in togglecase ='%s'\n",s);
 
}
