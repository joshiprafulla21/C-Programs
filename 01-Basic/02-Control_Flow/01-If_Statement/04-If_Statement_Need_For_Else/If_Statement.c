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
	printf("You are not eligible for voting !!\n");	// Here else is needed.
	return 0;
}