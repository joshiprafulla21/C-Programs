
//Write a program to count the no of 1 bits in the given number.

#include<stdio.h>
int Count(int);

int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	int result=Count(num);
	printf("No of 1s in %d is :%d",num,result);
	return 0;
}


int Count(int num)
{

	int count=0,x=1;
	if(num)
	{
		while(x<num)
		{
			if(num & x)
			{	
				count++;
			}
			x=x<<1;
		}
	}
	return count;	

}


