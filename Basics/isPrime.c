#include<stdio.h>
#include<math.h>
int isPrime(int);
int main()
{
	int lb,ub;
	printf("\nEnter lower bound :");
	scanf("%d",&lb);
	printf("\nEnter upper bound :");
	scanf("%d",&ub);
	for(int i=lb;i<ub;i++)
	{
		if(isPrime(i))
			printf("\n%d is prime\n",i);
	}
	return 0;
}

int isPrime(int num)
{
	int flag=0,i;
	if(num<2)
		return 0;
	if(num==2)
		return 1;
	if(num%2==0)
		return 0;
	for(i=3;i<(int)(sqrt(num));i=i+2)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}
