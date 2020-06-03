/*
	Write a program to print following pattern :
				*
               **
              ***
             ****
            *****
             ****
              ***
               **
                *   
*/
#include<stdio.h>

int main()
{
	int rows,i,j,k;
	printf("\nEnter number of rows :");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		int x=rows+1;
		for(j=1;j<=rows-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=rows-1;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=rows-1;k>=i;k--)
			printf("*");
		printf("\n");
	}
	return 0;
}
