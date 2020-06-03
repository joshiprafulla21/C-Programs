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
	int x=1;
	int count=0;
	
	while(x)
	{
		if(num & x==0)
		{
			count++;
		}
		x=x<<1;
	}
	return count;
}

