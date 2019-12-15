
/*
 Write a program to accept 3 sides of triangle and check whether triangle is valid or not.
 ( sum of 2 sides > 3rd side)
 
*/


#include<stdio.h>

int check(int,int,int);
int main()
{
	int side1,side2,side3;
	printf("\nEnter 1st side :");
	scanf("%d",&side1);
	
	printf("\nEnter 2nd side :");
	scanf("%d",&side2);
	
	printf("\nEnter 3rd side :");
	scanf("%d",&side3);
	
	if(check(side1,side2,side3))
		printf("\nTriangle is valid\n");
	else
		printf("\nTrinagle is not valid\n");
	return 0;
}


int check(int side1,int side2,int side3)
{
	int sum1=side1+side2;
	int sum2=side1+side3;
	int sum3=side2+side3;
	
	if(sum1>side3 || sum2 >side2 || sum3>side1)
		return 1;
	else
		return 0;
}
	
	
