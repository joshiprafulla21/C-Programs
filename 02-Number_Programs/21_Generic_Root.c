//Program to accept number from user and find generic root of that number

#include<stdio.h>
int main()
{
	//	Function declarations
	int getGenericRoot(int);
	
	//	Code
	int iNum, iGenRoot;
	printf("Enter the number :");
	scanf("%d",&iNum);
	iGenRoot = getGenericRoot(iNum);
	printf("Generic root is :%d",iGenRoot);
	return 0;
}


int getGenericRoot(int iNum)
{
	int iDigit,iSum;
	while(1)
	{
		iSum = 0;
		while(iNum > 0)
		{
			iDigit = iNum % 10;
			iSum = iSum + iDigit;
			iNum = iNum / 10;
		}
		
		if(iSum > 9)
			iNum = iSum;
		else
			break;
	}	
	return iSum;
}