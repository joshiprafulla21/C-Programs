#include<stdio.h>

//Entry Point Function
int main()
{
	// Local function declaration
	int ProcessArray(int*);
	// Variable declaration
	int iArray[5] = { 2, 3, 4, 5, 6 };
	int iResultArray[5];
	int iResult;
	int i, j;

	for (int i = 0; i < 5; i++)
	{
		iResult = 1;
		for (int j = 0; j < 5; j++) 
		{
			if (i == j)
				continue;
			iResult = iResult * iArray[j];
		}
		iResultArray[i] = iResult;
	}
	printf("\nThe result array is :");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d ", iResultArray[i]);
	}
	return 0;
}