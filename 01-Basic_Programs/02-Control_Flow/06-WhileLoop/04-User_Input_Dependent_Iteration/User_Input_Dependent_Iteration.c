#include <stdio.h>
int main(void)
{
	//variable declarations
	int i_num, num, i;

	//code
	printf("\n\n");

	printf("Enter number from which iteration must begin : ");
	scanf("%d", &i_num);

	printf("How many digits do you want to print from %d onwards ? : ", i_num);
	scanf("%d", &num);

	printf("Printing digits from %d to %d : \n\n", i_num, (i_num + num));

	i = i_num;
	while (i <= (i_num + num))
	{
		printf("\t%d\n", i);
		i++;
	}

	printf("\n\n");

	return(0);
}
