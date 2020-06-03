/* Write a program to check whether a number entered by user is multiple of 3 or not */

#include<stdio.h>

//Entry Point Function
int main()
{
    //Local Variable Declaration
    int temp, iNum, divNum;

    //Code
    printf("Enter the number :");
    scanf("%d", &iNum);

    temp = iNum;

    printf("\nEnter the number to check the divisibility :");
    scanf("%d", &divNum);

    while (temp > 0)
    {
        temp = temp - divNum;

        if (temp == 0)
        {
            printf("\n%d is multiple of %d", iNum, divNum);
            break;
        }
        else if(temp < 0)
        {
            printf("\n%d is not multiple of %d", iNum, divNum);
        }
        
    }
    return 0;
}