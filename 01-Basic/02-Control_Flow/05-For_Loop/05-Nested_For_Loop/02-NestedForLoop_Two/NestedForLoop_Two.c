#include<stdio.h>

int main(void)
{
	// Variable declarations
	int i,j,k;
	
	// Code
	printf("\n");
	for(i = 1; i <= 10; i++)
	{
		printf("i = %d\n",i);
		printf("--------------\n");
		for(j = 1; j <= 5; j++)
		{
			printf("\tj = %d\n",j);
			printf("\t--------------\n");
			for(k = 1;k <= 3; k++)
			{
				printf("\t\tk = %d\n",k);
			}
			printf("\n\n");
		}
		printf("\n\n");
	}
	return 0;
}