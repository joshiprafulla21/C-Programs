#include<stdio.h>

int ToggleBits(int,int,int);

int main()
{
	int number,position,NoOfBits;
	printf("\nEnter the number :");
	scanf("%d",&number);
	
	printf("\nEnter the position :");
	scanf("%d",&position);
	
	printf("\nEnter the no of bits to turn off :");
	scanf("%d",&NoOfBits);
	
	int result=ToggleBits(number,position,NoOfBits);
	printf("\nAfter toggling %d bits from position %d of %d is %d\n",NoOfBits,position,number,result);
	return 0;
}


int ToggleBits(int no,int pos,int bits)
{
	int x=1;
	x=(x<<bits)-1;
	x=x<<(pos-bits);
	return no^x;
}
	

