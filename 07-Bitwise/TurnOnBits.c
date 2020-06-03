#include<stdio.h>
int TurnOnBits(int,int,int);

int main()
{
	int number,position,NoOfBits;
	
	printf("\nEnter the number :");
	scanf("%d",&number);
	
	printf("\nEnter the position :");
	scanf("%d",&position);
	
	printf("\nEnter the no of bits to turn on :");
	scanf("%d",&NoOfBits);
	
	int result=TurnOnBits(number,position,NoOfBits);
	
	printf("\nAfter turning ON the %d bits from %d position of %d is %d\n",NoOfBits,position,number,result);
	
	return 0;
}


int TurnOnBits(int no,int pos,int bits)
{	
	int x=1;
	x=(x<<bits)-1;
	x=x<<(pos-bits);
	x=no|x;
	return x;
	//return no|((1<<bits-1)<<(pos-bits));
}
