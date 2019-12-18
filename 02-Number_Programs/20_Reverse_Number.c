//Program to accept a number from user and reverse that number

#include<stdio.h>
int main()
{
	//function decalrations
	int getReverseNumber(int);
	//Code
	int iNum;
	printf("Enter the number :");
	scanf("%d",&iNum);
	printf("Reverse number of %d is :%d\n",iNum,getReverseNumber(iNum));	
	return 0;
}

int getReverseNumber(int iNum)
{
	int iDigit,iReversedNumber = 0;
	while(iNum > 0)
	{
		iDigit = iNum % 10;
		iReversedNumber = (iReversedNumber * 10) + iDigit;
		iNum = iNum / 10;
	}
	return iReversedNumber;
}