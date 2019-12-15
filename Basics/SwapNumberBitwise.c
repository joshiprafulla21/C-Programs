#include<stdio.h>

int SwapNumbers(int,int);

int main()
{
	int num1,num2;
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	printf("\nEnter 2nd number :");
	scanf("%d",&num2);
	printf("\nBefore swapping \nA =%d\nB=%d\n",num1,num2);
	SwapNumbers(num1,num2);
	
	return 0;
}

int SwapNumbers(int num1,int num2)
{
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("\nAfter swapping \nA =%d\nB=%d\n",num1,num2);
	return 0;
}
	
