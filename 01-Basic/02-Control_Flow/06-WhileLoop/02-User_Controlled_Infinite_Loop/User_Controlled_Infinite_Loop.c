#include <stdio.h>
int main(void)
{
	//variable declarations
	char option, ch = '\0';

	//code
	printf("\n\n");
	printf("Enter 'Q' or 'q' to quit the infinite for loop : \n\n");
	printf("Enter 'Y' oy 'y' to initiate user controlled infinite loop : ");
	
	option = getchar();
	if (option == 'Y' || option == 'y')
	{
		while (1) //Infinite loop
		{
			printf("In Loop...\n");
			ch = getchar();
			if (ch == 'Q' || ch == 'q')
				break; 	//User controlled exiting from infinite loop
		}
		printf("EXITTING USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");
	}
	else
		printf("You must press 'Y' or 'y' to start user controlled infinite loop...\n");

	return(0);
}
