#include <stdio.h> // for printf() 
//#include <conio.h> //for getch()

int main(void)
{
	//variable declarations
	int a,b;
	int result;

	char option;
	char option_division;

	//code
	printf("\n");

	printf("Enter value for 'A' : ");
	scanf("%d",&a);
	getchar();		// Just to clear the input buffer
	
	printf("Enter value for 'B' : ");
	scanf("%d",&b);
	getchar();		// Just to clear the input buffer
	
	printf("Enter Option in character : \n\n");
	printf("'A' or 'a' For Addition : \n");
	printf("'S' or 's' For Subtraction : \n");
	printf("'M' or 'm' For Multiplication : \n");
	printf("'D' or 'd' For Division : \n");

		
	printf("Enter Option :");
	option = getchar();
	//scanf("%c",&option);
	//printf("Hello\n");
	printf("\n");
	
	switch(option)
	{
		
		// FALL THROUGH CONDITION FOR 'A' and 'a'
		case 'A':
		case 'a':
			result = a + b;
			printf("Addition of A=%d and B=%d is :%d\n",a,b,result);
			break;
		
		// FALL THROUGH CONDITION FOR 'S' and 's'
		case 'S':
		case 's':
			if(a > b)
			{
				result = a - b;
				printf("Subtraction of B=%d from A=%d is :%d\n",b,a,result);
			}
			else
			{
				result = b - a;
				printf("Subtraction of A=%d from B=%d is :%d\n",a,b,result);
			}
			break;

		// FALL THROUGH CONDITION FOR 'M' and 'm'
		case 'M':
		case 'm':
			result = a * b;
			printf("Multiplication of A=%d and B=%d is :%d\n",a,b,result);
			break;
		
		// FALL THROUGH CONDITION FOR 'D' and 'd'
		case 'D':
		case 'd':
			printf("Enter option in character : \n\n");
			printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
			printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

			getchar();		// Just to clear the input buffer
			printf("Enter option : ");
			//option_division = getchar();
			scanf("%c",&option_division);

			printf("\n\n");

			switch (option_division)
			{
				// FALL THROUGH CONDITION FOR 'Q' and 'q' and '/'
				case 'Q':
				case 'q':
				case '/':
					if (a >= b)
					{
						result = a / b;
						printf("Division of A = %d by B = %d gives Quotient = %d !!!\n", a, b,result);
					}
					else
					{
						result = b / a;
						printf("Division of B = %d by A = %d gives Quotient = %d !!!\n", b, a,result);
					}
					break;
				
				// FALL THROUGH CONDITION FOR 'R' and 'r' and '%'
				case 'R':
				case 'r':
				case '%':
					if (a >= b)
					{
						result = a / b;
						printf("Division of A = %d by B = %d gives Remainder = %d !!!\n", a, b,result);
					}
					else
					{
						result = b / a;
						printf("Division of B = %d by A = %d gives Remainder = %d !!!\n", b, a,result);
					}
					break;
				default:
					printf("Invalid character entered for division !\n");
					break;				
			}
			break;
		default:
			printf("Invalid character entered, try again... !!");
			break;	
	}
	printf("Swicth-Case block complete !!!\n");
	
	return 0;
}
