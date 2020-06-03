//Program to print maximum out of two numbers

#include<stdio.h>
int main()
{
	//Code
	int iNum1, iNum2;
	printf("Enter 1st number :\n");
	scanf("%d",&iNum1);
	printf("Enter 2nd number :\n");
	scanf("%d",&iNum2);
	if(iNum1 != iNum2)
	{
		if(iNum1 > iNum2)
			printf("Maximum number :%d\n",iNum1);
		else
			printf("Maximum number :%d\n",iNum2);
	}
	else
		printf("Both numbers are equal !!\n");
	return 0;
}