
/*
	Write a program to accept a number from user and print that number in words
	e.g. If number is 456 then output should be " Four Five Six"
*/

#include<stdio.h>

int printWords(int);
int getReverse(int);
int	main()
{
	int rem,number;
	printf("\nEnter the number :");
	scanf("%d",&number);
	int rev=getReverse(number);
	printWords(rev);
	return 0;
}


int getReverse(int number)
{	
	int rem,rev=0;
	while(number)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	return rev;
}

int printWords(int number)
{
	int rem=0;
	while(number)
	{
		rem=number%10;

		switch(rem)
		{
			case 0:
				printf(" Zero");
				break;
			case 1:
				printf(" One");
				break;
			case 2:
				printf(" Two");
				break;
			case 3:
				printf(" Three");
				break;				
			case 4:
				printf(" Four");
				break;	
			case 5:
				printf(" Five");
				break;	
			case 6:
				printf(" Six");
				break;	
			case 7:
				printf(" Seven");
				break;	
			case 8:
				printf(" Eight");
				break;	
			case 9:
				printf(" Nine");
				break;	
		}		
		number=number/10;		
	}
	return 0;
}
