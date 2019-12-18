// Program to check whether the number is perfect number or not
#include<stdio.h>
int main()
{
	// Code
	int iNum, i, sum = 0;
	printf("Enter the number :");
	scanf("%d",&iNum);
	for(i = 1; i <= iNum/2; i++)
	{
		if(iNum % i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == iNum)
		printf("%d is a perfect number.\n",iNum);
	else
		printf("%d is not a perfect number.\n",iNum);
}