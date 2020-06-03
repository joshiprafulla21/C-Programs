//Write a program which verifies whether the input string is pallindrome or not using pointers

#include<stdio.h>
#include<string.h>

int checkPallindrome(char*);
int main()
{
	char str[20];
	printf("\nEnter the string :");
	scanf("%s",str);
	if(checkPallindrome(str))
		printf("\nPallindrome\n");
	else
		printf("\nNot Pallindrome\n");
	return 0;
}



int checkPallindrome(char *str)
{
	int count=0;
	char *ptr1=str;
	
	char *ptr2=str;
	while(*ptr2!='\0')
	{
		ptr2++;
	}
	ptr2--;
	
	while(*ptr1==*ptr2 && ptr1<ptr2)
	{
		ptr1++;
		ptr2--;
	}
	return !(ptr1<ptr2);
}
