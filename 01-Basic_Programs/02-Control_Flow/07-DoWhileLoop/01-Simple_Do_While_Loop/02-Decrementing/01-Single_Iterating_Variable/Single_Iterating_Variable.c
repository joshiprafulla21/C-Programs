#include <stdio.h>
int main(void)
{
	//variable declarations
	int i;

	//code

	printf("Printing digits 10 to 1 : \n\n");

	i = 10;
	do
	{
		printf("\t%d\n", i);
		i--;
	}while (i >= 1);

	printf("\n");

	return(0);
}
