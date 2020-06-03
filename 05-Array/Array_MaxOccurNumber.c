//Write a program to accept an array of 10 integers from user and print count of maximum time occuring number
#include<stdio.h>
int printMaxOccurance(int*);
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
			printf("\nEnter an Element :");
		scanf("%d",&arr[i]);
	}
	printMaxOccurance(arr);
	return 0;
}

int printMaxOccurance(int arr[])
{
	int count=0;
	int max=arr[0];
	
	for(int i=1;i<10;i++)
	{
		if(max==arr[i])
		{
			count++;
		}
		else
