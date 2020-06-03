#include <stdio.h>
int main(void)
{
	// Variable declarations
	int i, j, k;

	// Code

	i = 1;
	do
	{
		printf("i = %d\n",i);
		printf("--------------\n");
		j = 1;
		do
		{
			printf("\tj = %d\n",j);
			printf("\t--------------\n");
			k = 1;
			do
			{
				printf("\t\tk = %d\n",k);
				k++;
			}while(k <= 5);
			
			j++;
		
		}while(j <= 3);
		
		i++;
		
	}while(i <= 2);
			
	return 0;
}
