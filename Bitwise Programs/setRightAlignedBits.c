#include<stdio.h>
int setRightAlignedBits(int,int,int,int);
int main()
{
	int  number,position,bits;
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	
	printf("\nEnter 1st number :");
	scanf("%d",&num2);
	
	printf("\nEnter the position :");
	scanf("%d",&position);
	
	printf("\nEnter the no of bits :");
	scanf("%d",&bits);
	
	printf("\nBefore swapping \nA=%d\nB=%d ",num1,num2);
	
	int result=SwapBits(num1,num2,position,bits);
	
	
	return 0;
}


int SwapBits(int num1,int num2 int position,int bits)
{
	int x=1;
	x=(x<<bits)-1;				//0000011111
	x=x<<(position-bits);		//001111100
	int res1=num1 & x;					//000110000
	//x1=x1>>(position-bits);		//000001100
	
	
	x=(x<<bits)-1;				
	x=x<<(position-bits);		
	int res2=num2 & x;
	
	num1=num1 & ~x;
	num2=num2 & ~x;
	
	num1=num1 | res2;
	num2=num2 | res1;
	
	printf("\nAfter swapping \nA=%d\nB=%d ",num1,num2);					
	
	return x;
}
