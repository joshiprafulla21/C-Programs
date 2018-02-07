/*	Write a program to print pattern like following :
		* * * *
		* * *
		* *
		*
	
*/
#include<stdio.h>

int main()
{
	int n,i,j;
	printf("\nEnter value of n :");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("* ");
		}
		printf("\n");
			}
	
	return 0;
}
