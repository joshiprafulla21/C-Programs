#include<stdio.h>
int main(void)
{
	// Variable declarations
	int a;
	
	// Code
	printf("\n");
	
	a = 5;
	
	if(a)
	{
		printf("if-block-1 :A exists and value is :%d\n",a);
	}
	
	a = -5;
	
	if(a)
	{
		printf("if-block-2 :A exists and value is :%d\n",a);
	}
	
	a = 0;
	
	if(a)			// Any NON-ZERO value for if-statement is TRUE
	{
		printf("if-block-3 :A exists and value is :%d\n",a);	// This will not be executed
	}
	
	printf("All 3 if statements are executed !!\n");
	
	return 0;
}