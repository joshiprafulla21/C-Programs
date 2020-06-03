#include <stdio.h>
int main(void)
{
	//variable declarations
	int month_number;

	//code
	printf("\n");

	printf("Enter number of month (1 to 12) : ");
	scanf("%d", &month_number);

	printf("\n");

	// IF - ELSE - IF LADDER BEGINS FROM HERE...
	if (month_number == 1) 
		printf("Month number %d is JANUARY !!!\n", month_number);

	else if (month_number == 2) 
		printf("Month number %d is FEBRUARY !!!\n", month_number);

	else if (month_number == 3) 
		printf("Month number %d is MARCH !!!\n", month_number);

	else if (month_number == 4) 
		printf("Month number %d is APRIL !!!\n", month_number);

	else if (month_number == 5) 
		printf("Month number %d is MAY !!!\n", month_number);

	else if (month_number == 6) 
		printf("Month number %d is JUNE !!!\n", month_number);

	else if (month_number == 7) 
		printf("Month number %d is JULY !!!\n", month_number);

	else if (month_number == 8) 
		printf("Month number %d is AUGUST !!!\n", month_number);

	else if (month_number == 9) 
		printf("Month number %d is SEPTEMBER !!!\n", month_number);

	else if (month_number == 10) 
		printf("Month number %d is OCTOBER !!!\n", month_number);

	else if (month_number == 11) 
		printf("Month number %d is NOVEMBER !!!\n", month_number);

	else if (month_number == 12) 
		printf("Month number %d is DECEMBER !!!\n", month_number);

	else 		//like 'default'...just like 'default' is optional in switch-case, so is 'else' in the if-else if-else ladder...
		printf("Invalid month number %d entered !!\n", month_number);

	printf("If - Else If - Else Ladder Complete !!\n");

	return(0);
}
