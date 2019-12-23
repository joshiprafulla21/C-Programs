#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
	// funciton declaration / prototype / signature
	int MyAddition(int,int);
	
	// Variable declaration
	int a, b;
	int result;
	// Code
	printf("\n");
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	result = MyAddition(a,b);
	printf("Sum = %d\n",result);
	return 0; 
}

/*
	***** USER DEFINED FUNCTION : METHOD OF DEFINITION 1 *****
	***** VALID(int) RETURN VALUE, VALID PARAMETERS (int,int) *****
*/

int MyAddition(int a,int b)
{
	// Variable declarations : local variables to MyAddition
	int sum;
	
	// Code
	
	sum = a + b;
	return sum;		
	
}