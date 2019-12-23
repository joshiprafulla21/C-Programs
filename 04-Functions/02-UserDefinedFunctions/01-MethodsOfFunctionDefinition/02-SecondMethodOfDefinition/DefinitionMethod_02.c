#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
	// funciton declaration / prototype / signature
	int MyAddition(void);
	
	// Variable declaration
	
	int result;
	
	// Code
	
	result = MyAddition();
	printf("Sum = %d\n\n",result);
	return 0; 
}

/*
	***** USER DEFINED FUNCTION : METHOD OF DEFINITION 1 *****
	***** VALID RETURN VALUE, NO PARAMETERS *****
*/

int MyAddition(void)
{
	// Variable declarations : local variables to MyAddition
	int a, b, sum;
	
	// Code
	printf("\n");
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	sum = a + b;
	
	return sum;
}