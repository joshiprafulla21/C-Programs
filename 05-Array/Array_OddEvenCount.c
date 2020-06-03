
//Write a program to accept an array of 10 integers from user and print count of even and odd numbers

#include<stdio.h>
int OddEvenCount(int*);
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		printf("\nEnter an Element :");
		scanf("%d",&arr[i]);
	}
	OddEvenCount(arr);
	return 0;
}

int OddEvenCount(int arr[])
{
	int OddCount=0,EvenCount=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i] & 1)
		{
			OddCount++;
		}
		else
		{
			EvenCount++;
		}
	}
	printf("\nOdd Count=%d\nEven Count=%d\n",OddCount,EvenCount);
	return 0;
}
