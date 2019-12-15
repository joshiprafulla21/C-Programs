//Write a program to accept an array of 10 integers from user and print it in reverse order
#include<stdio.h>
int ReversePrint(int*);
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
			printf("\nEnter an Element :");
		scanf("%d",&arr[i]);
	}
	ReversePrint(arr);
	free(arr);
	return 0;
}

int ReversePrint(int arr[])
{
	printf("\nAfter reversing the array :\n");
	for(int i=9;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
