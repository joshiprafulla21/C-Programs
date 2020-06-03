#include<stdio.h>
int TurnOffRightMostBit(int);

int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	int result=TurnOffRightMostBit(num);
	printf("After turning off the right most bit in %d is :%d\n",num,result);
	return 0;
}

int TurnOffRightMostBit(int num)
{
	int x=1;
	if(num)
	{
		while((num & x)==0)
		{
			x=x<<1;
		}
		return num & (~x);
	}
	else
	{
		printf("You entered 0.\n");
	}
}
