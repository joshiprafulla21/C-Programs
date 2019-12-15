
/*
	Write a program to accept a range from user and print table of that range.
*/

#include<stdio.h>
int printMultipleTables(int,int);

int main()
{
	int ub,lb;
	printf("\nEnter the lower bound :");
	scanf("%d",&lb);
	
	printf("\nEnter the upper bound :");
	scanf("%d",&ub);
	
	printMultipleTables(lb,ub);
	
	return 0;
}

int printMultipleTables(int lb,int ub)
{
	int i=0,j=0;
	
	for(i=lb;i<=ub;i++)
	{
		printf("\nTable of %d :",i);
		for(j=1;j<=10;j++)
		{
			printf("\n%d x %d =%d",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
