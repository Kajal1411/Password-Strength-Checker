//if-else,loop,string,array,File handling this concepts are used in this project.
#include<stdio.h>
#include<string.h>
int main()
{	

    //Declaration of all variables
	char name[35],mob[10],email[20],birthdate[8],pass[20];
	int upr=0,lwr=0,digit=0,splchar=0,flag=0;
	int i,j,length;
	char ch1,ch2;
	
	//All details of user	
	printf("Enter your name:");
	fgets(name,30,stdin);
	printf("Enter your Mobile number:");
	scanf("%s",mob);
	printf("Enter your email:");
    scanf("%s",email);
	printf("Enter your birthdate:");
	scanf("%s",birthdate);
	printf("Enter Password:");
	scanf("%s",pass);
	
	//Check Password is already exists or not.
	char oldpass[20];
	char op;
	FILE *f2;
	int m;
	f2=fopen("OldPass.txt","r");
	b2:
	m=0;
	while((op = fgetc(f2)) != '\n' && op != EOF)
	{
    	oldpass[m]=op;
    	m++;
    }
    oldpass[m]='\0';
    if(strcmp(pass,oldpass)==0)
    {  		
    	printf("\nGiven password is already exists.Please select a different password for better security.");	    
    	flag++;
		goto b1;
    }
    else
    {
    	// Check for end of file
    	if(feof(f2)) 
        {
            goto b1; 
        }
        else
        {
            goto b2;
		}
    }
    b1:
    fclose(f2);
}


