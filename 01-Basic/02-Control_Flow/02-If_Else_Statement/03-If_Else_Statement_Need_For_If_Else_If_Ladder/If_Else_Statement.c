#include <stdio.h>
int main(void)
{
	//variable declarations
	int iNum;

	//code
	printf("\n");

	printf("Enter the number : ");
	scanf("%d",&iNum);

	if (iNum < 0) // 'if' - 01
	{
		printf("%d is negative number !!!\n\n", iNum);
	}
	else // 'else' - 01
	{
		if( (iNum > 0) && (iNum <= 100 )) // 'if' - 02
		{
			printf("%d is between 0 and 100 !!\n",iNum);
		}
		else // 'else' - 02
		{
			if( (iNum > 100) && (iNum <= 200 )) // 'if' - 03
			{
				printf("%d is between 100 and 200 !!\n",iNum);
			}
			else // 'else' - 03
			{
				if( (iNum > 200) && (iNum <= 300 )) // 'if' - 04
				{
					printf("%d is between 200 and 300 !!\n",iNum);
				}
				else // 'else' - 04
				{
					if( (iNum > 300) && (iNum <= 400 )) // 'if' - 05
					{
						printf("%d is between 300 and 400 !!\n",iNum);
					}
					else // 'else' - 05
					{
						if( (iNum > 400) && (iNum <= 500 )) // 'if' - 06
						{
							printf("%d is between 300 and 400 !!\n",iNum);
						}
						else // 'else' - 07
						{
							printf("%d is greater than 500\n",iNum);
						} // closing brace of 'else' - 06
					
					} // closing brace of 'else' - 05
					
				} // closing brace of 'else' - 04
				
			} // closing brace of 'else' - 03
			
		} // closing brace of 'else' - 02
		
	} // closing brace of 'else' - 01
	
	return 0;
} // closing brace of main()