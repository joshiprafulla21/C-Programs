#include<stdio.h>
int printTable(int);
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	printTable(num);
	return 0;
}

int printTable(int num)
{
	int j,i=num;
	
	for(j=1;j<=10;j++)
	{
		printf("\n%d x %d =%d",i,j,i*j);
	}
	printf("\n");
	return 0;
}
