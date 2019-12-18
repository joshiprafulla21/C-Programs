//Program to check whether the number is prime or not in range
#include<stdio.h>

int main()
{
	//Function declarations
	int isPrime(int,int);

	//Code
	int iNum, iLower,iUpper;
	printf("Enter lower bound of range :");
	scanf("%d",&iLower);
	printf("Enter upper bound of range(MUST be greater than %d) :",iLower);
	scanf("%d",&iUpper);
	while(iLower <= iUpper)
	{
		if(isPrime(iLower,iUpper))//it simply means => if(isPrime(iNum) != 0),non-zero value is considered as true.   
		{
			printf("%d is a prime number.\n",iLower);
		}
		iLower = iLower + 1;
	}
	return 0;
}

int isPrime(int iLower, int iUpper)
{
	int i;
	if(iLower == 2)		// 2 is first prime EVEN number
	{
		for(i=iLower + 1; i<(iUpper/2); i=i+2)
		{
			if(iUpper % i == 0)
				return 0;
		}
	}
	else
	{
		for(i=iLower; i<(iUpper/2); i=i+1)
		{
			if(iUpper % i == 0)
				return 0;
		}
	}
	return 1;	
}

