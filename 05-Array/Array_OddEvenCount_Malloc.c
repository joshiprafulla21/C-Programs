
//Write a program to accept an array of n integers from user and print count of even and odd numbers. Allocate memory dynamically using malloc().

#include<stdio.h>
#include<stdlib.h>
int OddEvenCount(int*,int n);
int main()
{
	int n;
	int *arr=NULL;
	printf("\nEnter size of an array :");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("\nEnter an Element :");
		scanf("%d",&arr[i]);
	}
	OddEvenCount(arr,n);
	free(arr);
	return 0;
}

int OddEvenCount(int arr[],int n)
{
	int OddCount=0,EvenCount=0;
	for(int i=0;i<n;i++)
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
