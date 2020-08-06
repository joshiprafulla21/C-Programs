/*
	Write a program to accept no of rows from user and print following pattern
        A
        A B
        A B C
        A B C D
        A B C D E
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
        char ch = 'A'; // ASCII value 65
        for (j = 0; j < i; j++)
            printf("%c ", ch + j);
        printf("\n");
    }
    return 0;
}
