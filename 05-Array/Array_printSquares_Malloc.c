//Write a program to accept an array of n integers and print perfect squares out of them. Allocate memory dynamically using malloc().

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int printSquares(int*,int);
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
	printSquares(arr,n);
	free(arr);
	return 0;
}

int printSquares(int arr[],int n)
{
	int iRoot;
	double dRoot;
	printf("\nPerfect Squares in array :\n");
	for(int i=0;i<n;i++)
	{
		dRoot=sqrt(arr[i]);
		iRoot=dRoot;
		if(iRoot==dRoot)
		{
			printf("%d\n",arr[i]);
		}
		else if(i==n-1)
		{
			break;
		}
	}
	
	printf("\nNo perfect square in entered array.\n");
}
