/*
	Write a program to accept number from user and print sum of odd and even digits and difference between sum of odd and even digits.
	e.g. If number is 5269,then output should be
		 Sum of Odd digits=14
		 Sum of Even digits=8
		 Differnce between sum of odd & even digits=6
*/
#include<stdio.h>
int getEvenOddAddition(int);

int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	
	getEvenOddAddition(num);
	return 0;
	
}


int getEvenOddAddition(int num)
{
	int rem,EvenSum=0,EvenCount=0,OddCount=0,OddSum=0;
	
	while(num)
	{	
		rem=num%10;
		if(rem & 1==1)
		{
			OddSum+=rem;
			OddCount++;
		}
		else
		{
			EvenSum+=rem;
			EvenCount++;
		}
		num=num/10;
	}
	printf("\nNumber of Odd digits :%d",OddCount);
	printf("\nNumber of Even digits :%d",EvenCount);
	printf("\nSum of Odd digits :%d",OddSum);
	printf("\nSum of Even digits :%d\n",EvenSum);
	printf("\nDifference of sum of odd and even digits :%d\n",(EvenSum-OddSum));
	return 0;
}
