//Program to accept a number from user and find its factorial number

#include<stdio.h>
int main()
{
	//function decalrations
	int getFactorial(int);
	//Code
	int iNum;
	printf("Enter the number :");
	scanf("%d",&iNum);
	printf("Factorial of %d is :%d\n",iNum,getFactorial(iNum));
	return 0;
}

int getFactorial(int iNum)
{
	int iFactorial = 1;
	while(iNum > 0)
	{
		iFactorial = iFactorial * iNum;
		iNum--;
	}
	return iFactorial;
}
