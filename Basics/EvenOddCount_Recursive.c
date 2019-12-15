#include<stdio.h>
int printCount(int);
int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	
	printf("Total count of odd digits :%d\n",printCount(num));
	return 0;
}

int printCount(int num)
{
	int rem=0,OddCount=0,EvenCount=0;
	if(num==0)
	{
		return 0;
	}
	else
	{
		rem=num%10;
		if(rem & 1==1)
		{
			OddCount++;
		}
		else
		{
			EvenCount++;
		}
		printCount(num/10);
	}
	//printf("Total count of odd digits :%d",OddCount);
	return OddCount;
}
