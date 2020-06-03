/*
	Write a program to accept hours minutes and seconds from user and check whether the 	time is valid or not
*/
#include<stdio.h>
int checkTime(int,int,int);

int main()
{
	int hours,minute,seconds;
	printf("\nEnter hours :");
	scanf("%d",&hours);
	
	printf("\nEnter minutes :");
	scanf("%d",&minute);
	
	printf("\nEnter seconds :");
	scanf("%d",&seconds);
	
	if(checkTime(hours,minute,seconds))
		printf("\nTime is valid\n");
	else
		printf("\nTime is invalid\n");
		
	return 0;
}

int checkTime(int hours,int minute,int seconds)
{
	if(hours<=0 || minute<0 || seconds<=0)
		return 0;
	else if(hours<=12 && minute<60 && seconds<59)
		return 1;
		
	return 0;
}
