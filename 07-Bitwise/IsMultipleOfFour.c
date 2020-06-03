#include<stdio.h>
int IsMultiple(int);

int main()
{
	int number;
	printf("Enter the number :");
	scanf("%d",&number);
	IsMultiple(number);
	return 0;	
}


int IsMultiple(int number)	
{
	
	if (number & 3)
	{
		printf("%d\n",number&3);
		printf("NOT multiple of 4\n");
	}
	else
	{
		printf("%d\n",number&3);		
		printf("Multiple of 4\n");
	}
	return 0;
}
