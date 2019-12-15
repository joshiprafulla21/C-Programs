#include<stdio.h>
int printSumOfDigits(int);
int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	int result=printSumOfDigits(num);
	printf("\nThe sum of digits :%d\n",result);
	return 0;
}

int printSumOfDigits(int num)
{
	int sum1=0,sum=0,rem=0;
	
	if(num==0)
	{
		return 0;
	}	
	else
	{
		rem=num%10;
		return (rem+printSumOfDigits(num/10));
	}
}
