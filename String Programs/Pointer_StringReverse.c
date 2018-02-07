//Write a program to print the string in reverse order.

#include<stdio.h>
int main()
{
	int count=0;
	char str[20];
	char *ptr;
	printf("\nEnter the stirng :");
	scanf("%s",str);
	ptr=str;
	while(*ptr!='\0')
	{
		ptr++;
		count++;

	}
	printf("%d",count);
	printf("\nReversed string is :");
	while(count>=0)
	{
		printf("%c",*ptr--);
		count--;
	}
	printf("\n");
	return 0;
}
