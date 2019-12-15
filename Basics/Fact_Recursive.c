/*
	Write a program to find factorial of number using recursion
*/

#include<stdio.h>

int Factorial(int);
int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	
	printf("\nFactorial of %d is %d\n",num,Factorial(num));
	return 0;
}

int Factorial(int num)
{
	int fact=1;
	if(num==0)
		return 1;
	else
		return num*Factorial(num-1);
	}
