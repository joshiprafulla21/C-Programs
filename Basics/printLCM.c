/*
	Write a program to accept two numbers from user and print their LCM(Least Common 		Multiplier).
	e.g. If 10 and 12 are two input numbers then output should be 60.
*/

#include<stdio.h>
int getLCM(int,int);

int main()
{
	int num1,num2;
	
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	
	printf("\nEnter 2nd number :");
	scanf("%d",&num2);
	
	int result=getLCM(num1,num2);
	printf("\nLCM of %d and %d is %d\n",num1,num2,result);
	return 0;
}

int getLCM(int num1,int num2)
{
	int max;
	if(num1>num2)
		max=num1;
	else
		max=num2;
	
	while(1)
	{
		if(max%num1==0 && max%num2==0)
			break;
		else
			max++;
	}
	return max;
}
