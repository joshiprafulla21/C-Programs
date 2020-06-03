// Program to check whether the number is perfect number or not
#include<stdio.h>
int main()
{
	// Code
	int iSize, i, j, sum = 0;
	
	printf("How many numbers you want to enter :");
	scanf("%d",&iSize);
	int numArray[iSize];
	
	for(i = 0; i < iSize; i++)
	{
		printf("Enter number %d :",i+1);
		scanf("%d",&numArray[i]);
	}
	
	int num;
	
	for(i = 0; i < iSize; i++)
	{
		printf("in 1st for");
		num = numArray[i];
		j = 1;
		while(j <= num/2)
		{
			if(num % j == 0)
			{
				sum = sum + j;
			}
			j++;		
		}
		
		
		/*for(j = 1; j <= numArray[i]/2; j++)
		{
			printf("in 2nd for");
			if(numArray[i] % j == 0)
			{
				sum = sum + j;
			}
		}*/
		if(sum == num)
			printf("%d is a perfect number.",num);
	}
	return 0;
}
