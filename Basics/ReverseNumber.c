#include<stdio.h>

int ReverseNumber(int);

int main()
{
	int num;
	printf("Enter the number to reverse :\n");
	scanf("%d",&num);
	ReverseNumber(num);
}


int ReverseNumber(int num)
{
	int rem,i=0;
	printf("The reversed number is :\n");
	while(num>=i)
	{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
		i++;
	}
	printf("\n");
	return 0;
}
