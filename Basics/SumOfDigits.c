#include<stdio.h>

int SumOfDigits(int);

int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	SumOfDigits(num);
}


int SumOfDigits(int num)
{
	int i=0,sum=0,rem;
	while(i<=num)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		i++;
	}
	printf("The sum is :%d\n",sum);
	return 0;
}
