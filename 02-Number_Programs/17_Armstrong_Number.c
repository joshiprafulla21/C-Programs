//Program to accept a number from user and check if it is armstrong number or not.
// e.g., 153 = 1^3 + 5^3 + 3^3, so 153 is armstrong number.
#include<stdio.h>
int main()
{
	//function decalrations
	int isArmstrong(int);
	//Code
	int iNum;
	printf("Enter the number :");
	scanf("%d",&iNum);
	
	if(isArmstrong(iNum))
		printf("%d is an Armstrong number\n",iNum);
	else
		printf("%d is NOT Armstrong number\n",iNum);
	return 0;
}

int isArmstrong(int iNum)
{
	int iDigit, iCube, iSum = 0;
	int iNumber = iNum;
	while(iNum > 0)
	{
		iDigit = iNum % 10;
		iCube = (iDigit * iDigit * iDigit);
		iSum = iSum + iCube;
		iNum = iNum / 10;
	}
	if(iNumber == iSum)
		return 1;		
	else
		return 0;
}