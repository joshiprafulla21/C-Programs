/*
	Write a program to print following pattern :
					*
				   ***
				  *****
				 *******
				  *****
				   ***
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
		for(j=1;j<=rows-i;j++)
			printf(" ");
		for(k=1;k<=(2*i-1);k++)
			printf("*");
		printf("\n");
	}
	
	for(i=1;i<=rows-1;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=(2*(rows-1)-i);k>=i;k--)
			printf("*");
		printf("\n");
	}	
	return 0;
}
