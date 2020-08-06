/*
	Write a program to accept no of rows from user and print following pattern
                  A
			    B A
			  C B A
			D C B A
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
        char ch = 'A' + i - 1; // ASCII value of A = 65

        for (j = 1; j <= 2 * (numberOfRows - i); j++) // multiplied by 2 for adding space between characters
            printf(" ");
        for (k = 0; k < i; k++, ch--)
            printf("%c ", ch);
        printf("\n");
    }
    return 0;
}
