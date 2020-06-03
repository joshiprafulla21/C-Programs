/*
	Write a program to print following pattern :
				  A
			    B A
			  C B A
			D C B A
		
*/

#include<stdio.h>

int main()
{
	int rows,i,j,k;
	printf("\nEnter number of rows :");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		char ch='A'+i-1;
		for(j=1;j<=rows-i;j++)
			printf(" ");
		for(k=0;k<i;k++,ch--)
			printf("%c",ch);
		printf("\n");
	}
	
	return 0;
}
