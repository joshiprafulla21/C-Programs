/*Write a function power(m,n) to raise an integer m to a positive integer power n.i.e.,the value of power(2,5) is 32.*/

#include<stdio.h>

int power(int m,int n);

int main()
{
	int base,exponent;
	printf("Enter the base value :");
	scanf("%d",&base);
	printf("Enter the exponent value :");
	scanf("%d",&exponent);
	power(base,exponent);
	return 0;
}


int power(int base,int exponent)
{
	int i,k;
	k=1;
	for(i=0;i<exponent;i++)
	{
		k=k*base;
	}
	printf("power(%d,%d) =%d\n",base,exponent,k);
	return 0;
}
