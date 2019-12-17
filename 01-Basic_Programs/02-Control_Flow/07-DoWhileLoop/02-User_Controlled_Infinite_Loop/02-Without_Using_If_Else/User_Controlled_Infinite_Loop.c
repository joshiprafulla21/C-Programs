#include<stdio.h>

int main(void)
{
	// Variable declarations
	char option, ch = '\0';
	
	// Code
	printf("Once infinite loop starts, Press 'Q' or 'q' to exit from the infinte loop..\n\n");
	printf("Enter 'Y' or 'y' to start the infinite loop :");
	option = getchar();
	do
	{
		do
		{
			printf("In loop..\n");
			ch = getchar();
		}while(ch == 'Q' || ch == 'q');		//	Exitting from the loop
		
		printf("Exitting from the infinite loop.\n\n");
		printf("Do you want to continue the loop again ? Press 'Y' or 'y' to contionue :");
		option = getchar();
	}while(option == 'Y' || option == 'y');
	
	printf("You must press 'Y' or 'y' to start the loop.\n");
	
	return 0;	
}