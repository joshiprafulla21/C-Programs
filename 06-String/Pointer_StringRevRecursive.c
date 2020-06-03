//Write a recursive function to reverse string using pointers

#include<stdio.h>
void ReversePrint(char*);
int main()
{
	char str[20];
	printf("\nEnter the string :");
	scanf("%s",str);
	
	ReversePrint(str);
	return 0;
}


void ReversePrint(char *str)
{
	if(*str)
		ReversePrint(++str);
	printf("%c",*str);
}

