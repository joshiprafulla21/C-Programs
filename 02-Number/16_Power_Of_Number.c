//Program to accept number from user and find power of that number
#include<stdio.h>
int main()
{
	//Code
	int iNum,power;
	int finalPower = 1;
	printf("Enter the base number :");
	scanf("%d",&iNum);
	printf("Enter the power number :");
	scanf("%d",&power);
	while(power > 0)
	{
		finalPower *= iNum;
		power--;
	}
	printf("Power :%d\n",finalPower);
	return 0;
}