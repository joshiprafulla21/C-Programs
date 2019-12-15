//Write a program to accept an array of 10 integers and find maximum and minimum out of them.

#include<stdio.h>
int getMax(int*);
int getMin(int*);
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		printf("\nEnter an element :");
		scanf("%d",&arr[i]);
	}
	printf("\nMaximum number from an array :%d\n",getMax(arr));
	printf("\nMinimum number from an array :%d\n",getMin(arr));
	free(arr);
	return 0;
}


int getMax(int arr[])
{
	int max=arr[0];
	for(int i=1;i<10;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		
	}
	return max;
}


int getMin(int arr[])
{
	int min=arr[0];
	for(int i=1;i<10;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		
	}
	return min;
}
