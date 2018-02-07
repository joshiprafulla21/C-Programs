//Write a program to accept an array of n integers and find maximum and minimum out of them. Allocate memory dynamically using malloc().

#include<stdio.h>
#include<stdlib.h>
int getMax(int*,int);
int getMin(int*,int);
int main()
{
	int n;
	int *arr=NULL;
	printf("\nEnter size of an array :");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("\nEnter an element :");
		scanf("%d",&arr[i]);
	}
	printf("\nMaximum number from an array :%d\n",getMax(arr,n));
	printf("\nMinimum number from an array :%d\n",getMin(arr,n));
	
	free(arr);
	return 0;
}


int getMax(int arr[],int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}


int getMin(int arr[],int n)
{
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		
	}
	return min;
}
