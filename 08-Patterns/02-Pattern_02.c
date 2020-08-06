/*
	Write a program to accept no of rows from user and print following pattern
	* * * *
    * * *
    * *
    *
*/

#include <stdio.h>

int main()
{
    //Code
    int i, j, numberOfRows;
    printf("Enter the number of rows :");
    scanf("%d", &numberOfRows);

    for (i = numberOfRows; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}