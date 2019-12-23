#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
	// funciton declaration / prototype / signature
	void MyAddition(int,int);
	
	// Variable declaration
	int a, b;
	// Code
	printf("\n");
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	MyAddition(a,b);
	return 0; 
}

/*
	***** USER DEFINED FUNCTION : METHOD OF DEFINITION 1 *****
	***** NO RETURN VALUE, VALID PARAMETERS (int,int) *****
*/

void MyAddition(int a,int b)
{
	// Variable declarations : local variables to MyAddition
	int sum;
	
	// Code
	
	sum = a + b;
	
	printf("Sum of %d and %d = %d\n", a, b, sum);	
	
}