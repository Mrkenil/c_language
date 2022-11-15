#include <stdio.h>
#include <string.h>
 
tital(char s[])
{
	int i;
	for(i=0;i<strlen(s); i++)
 	{
   		if(s[i-1]==' ' || i==0)
  		{
    		if(s[i]>='a' && s[i]<='z')
       		     s[i]=s[i]-32;
     		else if(s[i]>='A' && s[i]<='Z')
                 s[i]=s[i]+32;
        }
    }
}
 
void main()
{
    char s[100];  
    int i;
 
    printf("Enter  the string : ");
    gets(s);
    
 
    tital(&s);
   
 	
     
    printf("string in togglecase ='%s'\n",s);
 
}
