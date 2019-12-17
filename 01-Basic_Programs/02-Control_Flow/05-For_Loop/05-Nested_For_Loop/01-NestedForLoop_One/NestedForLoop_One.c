#include<stdio.h>

int main(void)
{
	// Variable declarations
	int i,j;
	
	// Code
	printf("\n");
	for(i = 1; i <= 10; i++)
	{
		printf("i = %d\n",i);
		printf("--------------\n");
		for(j = 1; j <= 5; j++)
		{
			printf("\tj = %d\n",j);
		}
		printf("\n\n");
	}
	return 0;
}