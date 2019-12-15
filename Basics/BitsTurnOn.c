#include<stdio.h>
int TurnOnBits(int,int,int);
int main()
{
	int num,position,NoOfBits;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	printf("Enter the position :");
	scanf("%d",&position);
	
	printf("Enter the no of bits :");
	scanf("%d",&NoOfBits);
	
	int result=TurnOnBits(num,position,NoOfBits);
	
	printf("After turning ON %d bits of %d from %d position is :%d\n",NoOfBits,num,position,result);
	
	return 0;
}

int TurnOnBits(num,pos,bits)
{
	int x=1;
	x=1<<bits;
	x=x-1;
	x=x<<(pos-bits);
	return num | x;


}
