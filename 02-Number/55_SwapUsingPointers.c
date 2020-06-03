//Write a program to swap two integers using 'by value' and 'by reference'

#include<stdio.h>

void SwapByValue(int,int);
void SwapByReference(int*,int*);

int main()
{
	int a=10,b=20;
	
	printf("\nSwap by Value :");
	printf("\nBefore swapping A :%d\nB=%d\n",a,b);
	
	SwapByValue(a,b);
	printf("\nAfter swapping A :%d\nB=%d\n",a,b);
	
	
	printf("\nSwap by Reference :");
	printf("\nBefore swapping A :%d\nB=%d\n",a,b);
	
	SwapByReference(&a,&b);
	printf("\nAfter swapping A :%d\nB=%d\n",a,b);
	
	return 0;
}

void SwapByValue(int a,int b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;

}

void SwapByReference(int *a,int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
