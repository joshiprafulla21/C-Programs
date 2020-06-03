//Progran to accept N numbers from user and print maximum of N numbers
#include<stdio.h>
int main()
{
	//Code
	int iSize,i,max = 0;
	printf("How many numbers you want to enter :");
	scanf("%d",&iSize);
	
	int numArray[iSize];
	
	for(i = 0; i < iSize; i++)
	{
		printf("Enter number %d :",i+1);
		scanf("%d",&numArray[i]);
	}
	
	max = numArray[0];
	for(i = 1; i < iSize; i++)
	{
		if(numArray[i] > max)
		{
			max = numArray[i];
		}
	}
	printf("Maximum number is :%d\n",max);
	return 0;
}