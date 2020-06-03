#include<stdio.h>
#include<math.h>

int isPrime(int);
int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	if(isPrime(num))
	{
		printf("\nPrime Number");
	}
	else
	{
		printf("\nNOT Prime Number");
	}	
	return 0;
}


int isPrime(int num)
{
	int i;
	if(num>=2)
	{
		for(i=3;i<(num/2);i+=2)
		{
			if(num%i==0)
				return 1;
				break;
		}
	}
}		
