//Write a program to accept an array of 10 integers from user and print sum of odd and even numbers in given array.
#include<stdio.h>
int OddEvenSum(int*);
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
			printf("\nEnter an Element :");
		scanf("%d",&arr[i]);
	}
	OddEvenSum(arr);
	return 0;
}

int OddEvenSum(int arr[])
{
	int OddSum=0,EvenSum=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i] & 1)
		{
			OddSum+=arr[i];
		}
		else
		{
			EvenSum+=arr[i];
		}
	}
	printf("\nSum of odd numbers=%d\nSum of even numbers=%d\n",OddSum,EvenSum);
	return 0;
}
