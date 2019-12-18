//Program to check whether the number is prime or not
#include<stdio.h>

int main()
{
	//Function declarations
	int isPrime(int);

	//Code
	int iNum;
	printf("Enter the number to check for prime :");
	scanf("%d",&iNum);
	if(isPrime(iNum))//it simply means => if(isPrime(iNum) != 0),non-zero value is considered as true.   
	{
		printf("%d is a prime number.\n",iNum);
	}
	else
	{
		printf("%d is NOT a prime number.\n",iNum);
	}
	return 0;
}

int isPrime(int iNum)
{
	int i;
	if(iNum < 2)	// Prime numbers start from 2
		return 0;
	if(iNum == 2)	//	2 is first and only one EVEN prime number
		return 1;
	if(iNum % 2 == 0)	// All even numbers are skipped
		return 0;
	for(i=3; i<(iNum/2); i=i+2)
	{
		if(iNum % i == 0)
			return 0;
	}
	return 1;	
}

