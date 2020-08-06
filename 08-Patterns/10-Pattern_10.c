/*
	Write a program to accept number of rows and a character from user and print following pattern of that character

            A
			AA
			AAA
			AAAA
*/

#include <stdio.h>

int main()
{
    //Code
    int i, j, k, numberOfRows;
    char ch;

    printf("Enter the number of rows :");
    scanf("%d", &numberOfRows);

    printf("Enter the character :");
    scanf("%c", &ch);

    for (i = 1; i <= numberOfRows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}