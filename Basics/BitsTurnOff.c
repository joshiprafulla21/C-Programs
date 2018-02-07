#include<stdio.h>
int TurnOffBits(int,int,int);
int main()
{
	int num,position,NoOfBits;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	printf("Enter the position :");
	scanf("%d",&position);
	
	printf("Enter the no of bits :");
	scanf("%d",&NoOfBits);
	
	int result=TurnOffBits(num,position,NoOfBits);
	
	printf("After turning off %d bits of %d from %d position is :%d\n",NoOfBits,num,position,result);
	
	return 0;
}

int TurnOffBits(int num,int position,int NoOfBits)
{
	int x=1;
	x=1<<NoOfBits;
	x=x-1;
	x=x<<(position-NoOfBits);
	x=~x;
	return num & x;
}
