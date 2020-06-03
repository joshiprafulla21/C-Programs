#include<stdio.h>
int main(void)
{
	// Variable decalrations
	int age;
	
	// Code
	printf("\n");
	printf("Enter the age :");
	scanf("%d",&age);
	if(age >= 18)
	{
		printf("You are eligible for voting !!\n");
	}
	return 0;
}