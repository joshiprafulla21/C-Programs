#include<stdio.h>
#include<math.h>
int SumOfPowerOfDigits(int,int);

int main()
{
	int num1,num2;
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	
	printf("\nEnter 2nd number :");
	scanf("%d",&num2);
	
	int result=SumOfPowerOfDigits(num1,num2);
	printf("\nSum of power of digits :%d\n",result);
	return 0;
}


int SumOfPowerOfDigits(int num1,int num2)
{
	int rem1,rem2,sum=0;
	while(num1!=0)
	{
		rem1=num1%10;
		int number=num2;
		while(number!=0)
		{
			rem2=number%10;
			sum+=pow(rem1,rem2);
			number=number/10;
		}
		num1=num1/10;
	}
	return sum;
}
