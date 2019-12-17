#include <stdio.h>
int main(void)
{
	// Variable declarations
	int i_num, num, i;

	//Code
	
	printf("Enter number from which iteration must begin : ");
	scanf("%d", &i_num);

	printf("How many digits do you want to print from %d onwards ? : ", i_num);
	scanf("%d", &num);

	printf("Printing Digits %d to %d : \n\n", i_num, (i_num + num));

	for(i = i_num; i <= (i_num + num); i++)
	{
		printf("\t%d\n", i);
	}

	printf("\n");

	return(0);
}
