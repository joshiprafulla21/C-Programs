#include <stdio.h>
int main(void)
{
	//variable declarations
	int a, b, p;

	//code
	a = 9;
	b = 30;
	p = 30;

	// **** FIRST if-else PAIR ****
	printf("\n");
	if( a < b)
	{
		printf("Entering first if-block\n");
		printf("A is less than B !!\n\n");
	}
	else
	{
		printf("Entering first else-block\n");
		printf("A is NOT less than B !!\n\n");
	}
	printf("First if-else pair done !!!\n");
	
	
	// **** SECOND if-else PAIR ****
	printf("\n");
	if( b != p)
	{
		printf("Entering second if-block\n");
		printf("B is NOT equal to P !!\n\n");
	}
	else
	{
		printf("Entering second else-block\n");
		printf("B is equal to P !!\n\n");
	}
	printf("First if-else pair done !!!\n");
	
	return 0;
}