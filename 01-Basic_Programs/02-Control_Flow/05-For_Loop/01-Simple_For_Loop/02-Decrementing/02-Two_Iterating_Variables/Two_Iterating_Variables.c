#include <stdio.h>
int main(void)
{
	//variable declarations
	int i, j;

	//code
	
	printf("Printing digits from 10 to 1 and from 100 to 10 : \n");

	for(i = 10,j = 100; i >= 1,j >=10; i--,j = j - 10)
	{
		printf("\t %d \t %d\n", i, j);
	}

	return(0);
}
