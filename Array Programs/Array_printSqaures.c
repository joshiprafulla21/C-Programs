//Write a program to accept an array of 10 integers and print perfect squares out of them.

#include<stdio.h>
#include<math.h>
int printSquares(int*);
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		printf("\nEnter an element :");
		scanf("%d",&arr[i]);
	}
	printSquares(arr);
	return 0;
}

int printSquares(int arr[])
{
	int iRoot;
	double dRoot;
	printf("\nPerfect Squares in array :\n");
	for(int i=0;i<10;i++)
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
