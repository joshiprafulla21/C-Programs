#include<stdio.h>
int Factorial(int);
int fact=1;
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	Factorial(num);
	printf("Factorial of %d is :%d\n",num,fact);
}



int Factorial(int num)
{
	int i;
	for(i=1;i<=num;i++)
	{
		if(num==0)
		{
			break;
		}
		else
		{
			fact=fact*i;
		}
	}
	return fact;
}
	
