/*
	Write a program to accept no of rows from user and print following pattern

                          *
                        * * *
                      * * * * *
                    * * * * * * *
                  * * * * * * * * *
                    * * * * * * *
                      * * * * *
                        * * *
                          *
*/

#include <stdio.h>

int main()
{
    //Code
    int i, j, k, numberOfRows;
    printf("Enter the number of rows :");
    scanf("%d", &numberOfRows);

    for (i = 1; i <= numberOfRows; i++)
    {
        for (j = 1; j <= 2 * (numberOfRows - i); j++) // i is multiplied by 2 for adding space between printed characters
            printf(" ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("* ");
        printf("\n");
    }

    for (i = 1; i <= numberOfRows - 1; i++)
    {
        for (j = 1; j <= 2 * i; j++) // i is multiplied by 2 for adding space between printed characters
            printf(" ");
        for (k = (2 * (numberOfRows - 1)) - i; k >= i; k--)
            printf("* ");
        printf("\n");
    }
    return 0;
}