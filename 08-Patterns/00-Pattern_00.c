/*
	Write a program to accept no of rows from user and print following pattern
	* * * *
	* * * *
	* * * *
	* * * *
*/

#include <stdio.h>

int main()
{
    //Code
    int i, j, numberOfRows;
    printf("Enter the number of rows :");
    scanf("%d", &numberOfRows);

    for (i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfRows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}