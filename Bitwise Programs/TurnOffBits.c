#include<stdio.h>
int TurnOffBits(int,int,int);

int main()
{
	int number,position,NoOfBits;
	printf("\nEnter the number :");
	scanf("%d",&number);
	
	printf("\nEnter the position :");
	scanf("%d",&position);
	
	printf("\nEnter the no of bits to turn off :");
	scanf("%d",&NoOfBits);
	
	int result=TurnOffBits(number,position,NoOfBits);
	printf("\nAfter turning off %d bits from position %d of %d is %d\n",NoOfBits,position,number,result);
	return 0;
}


int TurnOffBits(int no,int pos,int bits)
{
	int x=1;
	x=x<<bits;
	x=x-1;
	x=x<<(pos-bits);
	x=~x;
	//return no&~((1<<bits-1)<<(pos-bits))
	
	return no & x;
}	 
