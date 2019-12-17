#include <stdio.h>
int main(void)
{
	//variable declarations
	int age;

	//code
	printf("\n\n");
	printf("Enter Age : ");
	scanf("%d",&age);
	printf("\n");
	if (age >= 18)
	{
		printf("Entering if-block..\n\n");
		printf("You are eligible for voting !!!\n");
	}
	else
	{
		printf("Entering else-block..\n\n");
		printf("You are  NOT eligible for voting !!\n");
	}
	
	printf("All done\n");
	
	return 0;
}