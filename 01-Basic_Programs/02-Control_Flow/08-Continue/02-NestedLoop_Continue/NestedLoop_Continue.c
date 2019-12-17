#include <stdio.h>
int main(void)
{
	// Variable declarations
	int i, j;

	// Code

	printf("Outer loop prints odd numbers between 1 and 10. \n\n");
	printf("Inner loop prints even numbers between 1 and 10 for every odd number printed by outer loop. \n");

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
		{
			printf("i = %d\n", i);
			printf("---------\n");
			for (j = 1; j <= 10; j++)
			{
				if (j % 2 == 0) 
				{
					printf("\tj = %d\n",j);
				}
				else 
				{
					continue;
				}
			}
			printf("\n\n");
		}
		else 
		{
			continue;
		}
	}

	printf("\n\n");

	return(0);
}
