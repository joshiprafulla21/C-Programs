#include<stdio.h>
int SwapBits(int,int,int,int);
int main()
{
	int  num1,num2,position,bits;
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	
	printf("\nEnter 2nd number :");
	scanf("%d",&num2);
	
	printf("\nEnter the position :");
	scanf("%d",&position);
	
	printf("\nEnter the no of bits :");
	scanf("%d",&bits);
	
	printf("\nBefore swapping \nA=%d\nB=%d ",num1,num2);
	
	SwapBits(num1,num2,position,bits);
	
	
	return 0;
}


int SwapBits(int num1,int num2,int position,int bits)
{
	int x=1;
	x=(x<<bits)-1;				
	x=x<<(position-bits);		
	int res1=num1 & x;			
	
	
	x=(x<<bits)-1;				
	x=x<<(position-bits);		
	int res2=num2 & x;
	
	num1=num1 & ~x;
	num2=num2 & ~x;
	
	num1=num1 | res2;
	num2=num2 | res1;
	
	printf("\nAfter swapping \nA=%d\nB=%d ",num1,num2);					
	
	return 0;
}
