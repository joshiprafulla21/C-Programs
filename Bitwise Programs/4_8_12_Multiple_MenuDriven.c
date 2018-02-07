#include<stdio.h>

int IsMultipleOfFour(int);
int IsMultipleOfEight(int);
int IsMultipleOfSixteen(int);

int main()
{
	int number,ch;
	
	printf("\nEnter the number :");
	scanf("%d",&ch);
	
	printf("\nMENU");
	printf("\n1.IsMultipleOf 4");
	printf("\n2.IsMultipleOf 8");
	printf("\n3.IsMultipleOf 16");
	printf("\n4.Exit");
	printf("\nEnter the choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{	
		case 1:
			IsMultipleOfFour(number);
			break;
		case 2:
			IsMultipleOfEight(number);
			break;
		case 3:
			IsMultipleOfSixteen(number);
			break;
		default:
			printf("\nNumber is not multiple of 4 8 and 16");
	}
	return 0;
}


int IsMultipleOfFour(int num) 
{
	if(num & 3)
	{
		printf("\n%d",num & 3);
		printf("\nNumber is multiple of 4");
	}
	else
	{
		printf("\n%d",num & 3);
		printf("\nNOT multiple of 4");
	}

	return 0;
}


int IsMultipleOfEight(int num)
{
	if(num & 7)
	{
		printf("\n%d",num & 7);
		printf("\nNumber is multiple of 8");
	}
	else
	{
		printf("\n%d",num & 7);
		printf("\nNOT multiple of 8");
	}
	return 0;
}	


int IsMultipleOfSixteen(int num)
{
	if(num & 15)
	{
		printf("\n%d",num & 15);
		printf("\nNumber is multiple of 15");
	}
	else
	{
		printf("\n%d",num & 15);
		printf("\nNOT multiple of 16");
	}
	return 0;
}

