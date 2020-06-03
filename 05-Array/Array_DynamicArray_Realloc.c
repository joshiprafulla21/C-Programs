//Write a program to implement dynamic array using realloc()

#include<stdio.h>
#include<stdlib.h>

//void Realloc(int*,int);
int EvenAdd(int*,int);
int OddAdd(int*,int);
int getMax(int*,int);
int getMin(int*,int);


int main()
{
	int *arr,n;
	int ch;
	int m;
	printf("\nEnter size of an array :");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	do
	{
		printf("\nMENU\n");
		printf("1.Realloc()\n");
		printf("2.EvenAddition\n");
		printf("3.OddAddition\n");
		printf("4.Maximum number\n");
		printf("5.Minimum number\n");
		printf("6.Exit\n");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter new size of an array :");
				scanf("%d",&m);
				arr=(int*)realloc(arr,(n+m)*sizeof(int));
				printf("\nArray memory reallocated to new size.");
	
				for(int i=0;i<m;i++)
				{
					printf("\nEnter an element :");
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				//Realloc(arr,n);
				printf("\nEven addition :%d",EvenAdd(arr,n));
				break;
			case 3:
				//Realloc(arr,n);
				printf("\nOdd Addition :%d",OddAdd(arr,n));
				break;
			case 4:
				//Realloc(arr,n);
				printf("\nMaximum number :%d",getMax(arr,n));
				break;
			case 5:
				//Realloc(arr,n);
				printf("\nMinimum number :%d",getMin(arr,n));
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("\nWrong choice.\n");
		}
	}while(ch!=6);
	return 0;
}
/*
void Realloc(int arr[],int n)
{
	int m;
	printf("\nEnter new size of an array :");
	scanf("%d",&m);
	arr=(int*)realloc(arr,(n+m)*sizeof(int));
	printf("\nArray memory reallocated to new size.");
	
	for(int i=0;i<m;i++)
	{
		printf("\nEnter an element :");
		scanf("%d",&arr[i]);
	}
	//return arr;
}
*/

int EvenAdd(int arr[],int n)
{
	int EvenSum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] & 1)
		{
			EvenSum+=arr[i];
		}
	}
	return EvenSum;
}

int OddAdd(int arr[],int n)
{
	int OddSum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] & 1)
		{
			OddSum+=arr[i];
		}
	}
	return OddSum;
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
