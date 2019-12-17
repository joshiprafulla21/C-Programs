#include <stdio.h>
int main(void)
{
	//variable declarations
	int i;

	//code

	printf("Printing digits 1 to 10 : \n\n");

	i = 1;
	do
	{
		printf("\t%d\n", i);
		i++;
	}while (i <= 10);

	printf("\n");

	return(0);
}
