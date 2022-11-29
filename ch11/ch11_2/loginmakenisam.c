#include<stdio.h>
#include<string.h>

/*

	email : 
		valid :
			- lower >  0
			- digit >= 0
			- @     =  1  positon = 
			- .     >  0  positon = last 3 || 4
		invalid : 
			- upper = 0	
			- sc    = 0
			- space = 0
	
	password : 
		valid : 
			- lower >  0
			- upper >  0
			- sc    >  0
			- dg    >  0	
			- len   >= 6
			- space = 0	


*/

void main()
{
	char email[100],pass[20],p[20];
	int lo=0,dg=0,at=0,dot=0,up=0,sc=0,sp=0,i,dp,ap;
	
	printf("Enter your email : ");
	gets(email);
	
	for(i=0;i<strlen(email);i++)
	{
		if(email[i]>='a'&&email[i]<='z') {
			lo++;
		} else if(email[i]>='0'&&email[i]<='9') {
			dg++;
		} else if(email[i]>='A'&&email[i]<='Z') {
			up++;
		} else if(email[i]=='@') {
			at++;
			ap = i;
		} else if(email[i]=='.') {
			dot++;
			dp = i;
		} else if(email[i]==' ') {
			sp++;
		} else {
			sc++;
		}
	}
	
	if(lo > 0 && dg >= 0 && up == 0 && at == 1 && dot > 0 && sc == 0 && sp == 0 && (dp == strlen(email)-3 || dp == strlen(email)-4) && dp - ap >=3 && ap >= 3)
	{
		printf("Your email is valid......\n");
		printf("\n-----------------------------------\n");
		printf("Enter your password : ");
		scanf("%s",&pass);
		lo=0;dg=0;at=0;dot=0;up=0;sc=0;sp=0;
		for(i=0;i<strlen(pass);i++)
	    {
			if(email[i]>='a'&&email[i]<='z') {
				lo++;
			}else if(email[i]>='0'&&email[i]<='9') {
				dg++;
			} else if(email[i]>='A'&&email[i]<='Z') {
				up++;
			} else if(email[i]=='@') {
				at++;
			} else if(email[i]=='.') {
				dot++;
			} else if(email[i]==' ') {
				sp++;
			} else {
				sc++;
			}
	   }
	   if(lo > 0 && dg >= 0 && up >= 0 && at >= 0 && dot >= 0 && sc >= 0 && sp == 0 && strlen(pass) >= 6) {
	   		printf("\n-----------------------\nemail : ");
	   		puts(email);
	   		printf("Enter your password twais : ");
	   		scanf("%s",&p);
	   		printf("\n-------------------------\n");
	   		strlwr(pass);
	   		strlwr(p);
	   		int k = strcmp(pass,p);
	   		if(k == 0)
	   		{
	   			system("cls");
	   		    printf("You have login your i'd");
	   		    
		    }
		    else{
		    	printf("your password is not mech");
			}
	   } else if(sp > 0) {
	   		printf("password not cunten any space ......");
	   } else if(strlen(pass) < 6) {
	   		printf("password must have six leters");
	   } else {
	   		printf("invalid password......");
	   }
	
	} else {
		printf("Your email is invalid.......\n");
	}
}
