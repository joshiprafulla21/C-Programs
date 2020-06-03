
/*
	Write a program to accept two numbers from user and print their GCD(Greatest Common 	Divisor).
	e.g.,If 100 and 75 are two input numbers then output should be 25
*/


#include<stdio.h>

int getGCD(int,int);

int main()
{
	int num1,num2;
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	printf("\nEnter 2nd number :");
	scanf("%d",&num2);
	
	int result=getGCD(num1,num2);
	printf("\nGCD of %d and %d is %d\n",num1,num2,result);
	return 0;
}

int getGCD(int num1,int num2)
{
	while(num1!=num2)
	{
		if(num1>num2)
			num1=num1-num2;
		else
			num2=num2-num1;
	}
	return num1;
}
