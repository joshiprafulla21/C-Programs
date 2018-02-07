/*
	Write a program to print the number in reverse order by using recusrion.
*/

#include<stdio.h>

int printReverse(int);
int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	printReverse(num);
	return 0;
}

int printReverse(int num)
{
	int rem,reverse=0;
	if(num)
	{
		rem=num%10;
		printf("%d",rem);
		printReverse(num/10);
	}
	else
		printf("\n");
		return 0;
}
