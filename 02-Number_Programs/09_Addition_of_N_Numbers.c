//Progran to accept N numbers from user and print their addition
#include<stdio.h>
int main()
{
	//Code
	int iSize,i,sum = 0;
	printf("How many numbers you want to enter :");
	scanf("%d",&iSize);
	
	int numArray[iSize];
	
	for(i = 0; i < iSize; i++)
	{
		printf("Enter number %d :",i+1);
		scanf("%d",&numArray[i]);
	}
	
	for(i = 0; i < iSize; i++)
	{
		sum = sum + numArray[i];
	}
	printf("Addition of %d numbers entered by you is :%d",iSize,sum);
	printf("\n");
	return 0;
}