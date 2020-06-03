//Write a program to accept an array of n integers from user and print sum of odd and even numbers in given array. Allocate the memory dynamically using malloc().

#include<stdio.h>
#include<stdlib.h>
int OddEvenSum(int*,int);
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
	OddEvenSum(arr,n);
	free(arr);
	return 0;
}

int OddEvenSum(int arr[],int n)
{
	int OddSum=0,EvenSum=0;
	for(int i=0;i<n;i++)
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
