/*
	Write a program to check whether the year is leap year or not
*/

#include<stdio.h>
int checkLeapYear(int);

int main()
{
	int year;
	printf("\nEnter year :");
	scanf("%d",&year);
	
	if(checkLeapYear(year))
		printf("\n%d is leap year\n",year);
	else
		printf("\n%d is not leap year\n",year);
	return 0;
}


int checkLeapYear(int year)
{
	if(year & 3)
		return 0;
	else
		return 1;
}
