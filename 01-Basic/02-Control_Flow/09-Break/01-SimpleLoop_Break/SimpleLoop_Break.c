#include<stdio.h>

int main(void)
{
	// Variable declarations
	char ch = '\0';
	int i;
	// Code
	
	printf("Printing Even numbers from 1 to 100 for every user input.\n");
	printf("Press 'Q' or 'q' to exit from the loop\n");
	
	for(i = 1; i <= 100; i++)
	{
		printf("\t%d\n",i);
		ch = getchar();
		if(ch == 'Q' || ch == 'q')
			break;
	}
	return 0;
}