#include<stdio.h>

int main(void)
{
	// Variable declarations
	char option,ch = '\0';
	
	printf("Enter 'Q' or 'q' to exit from the infinte loop.\n");
	printf("Enter 'Y' or 'y' to start the user controlled infinte loop :");
	option = getchar();
	if(option == 'Y' || option == 'y')
	{
		for(;;)	//infinte loop
		{
			printf("In loop..\n");
			ch = getchar();
			if(ch == 'Q' || ch == 'q')
			{
				break;	//Exiting from the infinte loop
			}
		}
	}
	printf("\n");
	printf("EXITNG USER-CONTROLLED INFINTE LOOP !!!\n");
	
	return 0;
}