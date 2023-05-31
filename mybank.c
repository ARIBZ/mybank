#include <stdio.h>
#include <string.h>

int main()
{	
	/* WELCOME PAGE */
	printf("Welcome to Mybank");
	
	/*CREATE AN ACCOUNT. */
	char firstname[20], lastname[20];
	printf("Please create an account before you continue. \nEnter your first and last names here: ");
	scanf("%s %s", firstname, lastname);

	char pass[20];
	char val[20];
	int value;
	int i = 3;
	int passwordCorrect = 0;

	printf("Enter your password: ");
	scanf("%s", pass);

	printf("Confirm password: ");
	scanf("%s", val);

	//strcmp = string compare
	value = strcmp(pass, val);

	if (value != 0)
		while (i >= 0) 
		{
			printf("\n Your passwords don't match \n");
			printf("Try again Re-enter your password: ");
			scanf("%s", val);

			value = strcmp(pass, val);
			
			if (value == 0) 
			{
				passwordCorrect = 1; //Password validation successful
				break;
			}
		
			if (i > 0)
				printf("Passwords don't matcH. You have %d more attepmts \n", i);
			else
				printf("Your account is locked");
				i--;
			
		} 
	else
		passwordCorrect = 1; //	Password validation successful
	
}	
