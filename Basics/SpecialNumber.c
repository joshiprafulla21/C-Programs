
/*
	Write a program to accept a number from user and check whether that number is special 		number or not.
	e.g.,Input is 153.
		 If 1^3+5^3+3^3==153 then 153 is a special number.
*/

#include<stdio.h>

int isSpecialNumber(int);

int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(isSpecialNumber(num))
	{
		printf("\n%d is a special number.\n",num);
	}
	else
	{
		printf("\n%d is not a special number.\n",num);
	}
	return 0;
}


int isSpecialNumber(int num)
{
	int sum=0,rem,number;
	number=num;
	while(num)
	{
		rem=num%10;
		sum+=rem*rem*rem;
		num=num/10;
	}
	if(number==sum)
		return 1;
	else
		return 0;
}
