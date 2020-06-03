//Program to accept a number from user and count number of digits in that number.

#include<stdio.h>
int main()
{
	//function decalrations
	int getCountOfDigits(int);
	//Code
	int iNum;
	printf("Enter the number :");
	scanf("%d",&iNum);
	printf("Number of digits in %d are :%d\n",iNum,getCountOfDigits(iNum));
	return 0;
}

int getCountOfDigits(int iNum)
{
	int iDigit, iDigitCount = 0;
	while(iNum > 0)
	{
		iDigit = iNum % 10;
		iDigitCount++;
		iNum = iNum / 10;
	}
	return iDigitCount;
}
