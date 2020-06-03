#include<stdio.h>

int main(void)
{
	// Variable declarations
	char option, ch = '\0';
	
	// Code
	printf("Once infinite loop starts, Press 'Q' or 'q' to exit from the infinte loop..\n\n");
	printf("Enter 'Y' or 'y' to start the infinite loop :");
	option = getchar();
	if(option == 'Y' || option == 'y')
	{
		do
		{
			printf("In loop..\n");
			ch = getchar();
			if(ch == 'Q' || ch == 'q') 
				break;				//	Exitting from the loop
		}while(1);
		
		printf("Exitting from the infinite loop.\n\n");
		
	}
	else
	{
		printf("You must press 'Y' or 'y' to start the loop.\n");
	}
	
	return 0;	
}