/*
	Write a program to accept a character from user and print following pattern of that 	character
			A
			AA
			AAA
			AAAA
			
*/

#include<stdio.h>
int main()
{
	int i,j,rows;
	char ch;
	printf("\nEnter a character :");
	scanf("%c",&ch);
	printf("\nEnter number of rows :");
	scanf("%d",&rows);
	for(i=1;i<rows;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
	}
	return 0;
}
