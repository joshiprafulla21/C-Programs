//Program to multiply three numbers and print on console
#include<stdio.h>
int main()
{
	//Code
	int iNum1, iNum2, iNum3;
	printf("Enter 1st number :\n");
	scanf("%d",&iNum1);
	printf("Enter 2nd number :\n");
	scanf("%d",&iNum2);
	printf("Enter 3rd number :\n");
	scanf("%d",&iNum3);
	printf("Multiplication of %d , %d and %d is %d\n",iNum1,iNum2,iNum3,(iNum1*iNum2*iNum3));
	return 0;
}