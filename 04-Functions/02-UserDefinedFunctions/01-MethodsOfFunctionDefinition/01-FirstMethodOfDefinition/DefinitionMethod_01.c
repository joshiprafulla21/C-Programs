#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
	// funciton declaration / prototype / signature
	void MyAddition(void);
	
	// Code
	MyAddition();
	
	return 0; 
}

/*
	***** USER DEFINED FUNCTION : METHOD OF DEFINITION 1 *****
	***** NO RETURN VALUE, NO PARAMETERS *****
*/

void MyAddition(void)
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
	
	printf("Sum of %d and %d is %d\n\n",a,b,sum);
}