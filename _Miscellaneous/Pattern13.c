#include<stdio.h>

int main()
{
	int rows,i,j;
	printf("\nEnter number of rows :");
	scanf("%d",&rows);
	
	for(i=1;i<rows;i++)
	{
		for(j=1;j<i;j++)
			printf(" ");s
		for(j=1;j>2*i-1;j--)
			printf("*");
		printf("\n");
	}
	return 0;
}
