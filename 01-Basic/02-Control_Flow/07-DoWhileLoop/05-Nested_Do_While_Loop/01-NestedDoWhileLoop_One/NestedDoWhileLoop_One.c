#include <stdio.h>
int main(void)
{
	//variable declarations
	int i, j;

	//code
	printf("\n\n");

	i = 1;
	do
	{
		printf("i = %d\n",i);
		printf("--------------\n");
		j = 1;
		do
		{
			printf("\tj = %d\n",j);
			j++;
		}while(j <= 5);
		
		i++;
	}while(i <= 3);
	
	return 0;
}
