// Program to accept N numbers from user and print all ODD numbers from those N numbers
#include<stdio.h>
int main()
{
	//Code
	int size,i;
	printf("How many numbers do you want to add to array ?(int)\n");
	scanf("%d",&size);
	int numArray[size];
	for(i=0;i<size;i++)
	{
		printf("Enter element :");
		scanf("%d",&numArray[i]);
	}
	printf("ODD numbers from above %d numbers\n",size);
	for(i=0;i<size;i++)
	{
		if ((numArray[i] % 2) == 0)
			continue;
		printf("%d\n",numArray[i]);
	}
	return 0;
}