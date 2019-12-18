//Program to accept number from user and check whether addition of digits of number is even or not

#include<stdio.h>
int main()
{
	//	Function declarations
	int getGenericRoot(int);
	
	//	Code
	int iNum, iGenRoot;
	printf("Enter the number :");
	scanf("%d",&iNum);
	if(getGenericRoot(iNum))
		printf("Addition of digits is EVEN\n");
	else
		printf("Addition of digits is ODD\n");
	return 0;
}


int getGenericRoot(int iNum)
{
	int iDigit,iSum;
	iSum = 0;
	while(iNum > 0)
	{
		iDigit = iNum % 10;
		iSum = iSum + iDigit;
		iNum = iNum / 10;
	}
	if(iSum %2 == 0)
		return 1;
	else
		return 0;
}