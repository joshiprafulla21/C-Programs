/*
	Write a program to print following pattern :
		A
		A B
		A B C
		A B C D
*/

#include<stdio.h>

int main()
{
	int i,j,rows;
	printf("\nEnter number :");
	scanf("%d",&rows);
	
	for(i=1;i<rows;i++)
	{
		char ch='A';
		for(j=0;j<i;j++)
			printf("%c ",ch+j);
		printf("\n");
	}
	
	return 0;
}
