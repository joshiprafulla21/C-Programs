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
	int i,j;
	
	for(i=lb;i<=ub;i++)
	
		//printf("Table of %d",i);
		for(j=1;j<=10;j++)
		
			printf("%3d x %3d =%3d",i,j,i*j);
		lb++;
		printf("\t");
	
	return 0;
}
