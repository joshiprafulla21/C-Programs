#include <stdio.h>
int main(void)
{
	//variable declarations
	int i_num, num, i;

	//code
	printf("\n");

	printf("Enter number from which iteration must begin : ");
	scanf("%d", &i_num);

	printf("How many digits do you want to print from %d onwards ? : ", i_num);
	scanf("%d", &num);

	printf("Printing digits from %d to %d :\n", i_num, (i_num + num));

	i = i_num;
	do
	{
		printf("\t%d\n", i);
		i++;
	}while (i <= (i_num + num));

	printf("\n");

	return(0);
}
