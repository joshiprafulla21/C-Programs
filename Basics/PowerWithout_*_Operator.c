/*
	Write a program to calculate x^n without using multiplication(*) operator
*/

#include<stdio.h>
int CalculatePower(int,int);
int Multiply(int,int);
int main()
{
	int x,n;
	printf("\nEnter value of x :");
	scanf("%d",&x);
	
	printf("\nEnter value of n :");
	scanf("%d",&n);

	printf("\nValue of %d ^ %d is :%d\n",x,n,CalculatePower(x,n));
	return 0;
}

int CalculatePower(int x,int n)
{
	int pow=x;
	if(x==0)
		return 0;
	else if(x==1 || n==0)
		return 1;
	else
	{
		for(int i=1;i<n;i++)
			pow=Multiply(pow,x);
		return pow;
	}
}

int Multiply(int pow,int x)
{
	int result=0;
	for(int i=1;i<=x;i++)
	{
		result=result+pow;	
	}
	printf("\nMultiplication result :%d",result);
	return result;
}
