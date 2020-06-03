#include<stdio.h>
int main(void)
{
	// Variable declarations
	int month_number;
	
	// Code
	
	printf("\n");
	
	printf("Enter number of month (1 to 12) : ");
	scanf("%d", &month_number);
	
	printf("\n");
	
	switch(month_number)
	{
		case 1:
			printf("Month number %d is JANUARY !!!\n",month_number);
			break;
		
		case 2:
			printf("Month number %d is FEBRUARY !!!\n",month_number);
			break;

		case 3:
			printf("Month number %d is MARCH !!!\n",month_number);
			break;

		case 4:
			printf("Month number %d is APRIL !!!\n",month_number);
			break;

		case 5:
			printf("Month number %d is MAY !!!\n",month_number);
			break;

		case 6:
			printf("Month number %d is JUNE !!!\n",month_number);
			break;

		case 7:
			printf("Month number %d is JULY !!!\n",month_number);
			break;

		case 8:
			printf("Month number %d is AUGUST !!!\n",month_number);
			break;

		case 9:
			printf("Month number %d is SEPTEMBER !!!\n",month_number);
			break;

		case 10:
			printf("Month number %d is OCTOBER !!!\n",month_number);
			break;

		case 11:
			printf("Month number %d is NOVEMBER !!!\n",month_number);
			break;

		case 12:
			printf("Month number %d is DECEMBER !!!\n",month_number);
			break;

		default:
			printf("Invalid month number %d entered !!!\n",month_number);
			break;
	}
	printf("Switch Case Block Complete !!!\n");
	return 0;
}