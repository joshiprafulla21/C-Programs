//Write a program which return length of the string
#include<stdio.h>
int showLength(char*);
int main()
{
	char str[20];
	
	
	printf("\nEnter the string :");
	scanf("%s",str);
	
	printf("Length of the string :%d\n",showLength(str));
	return 0;
}

int showLength(char *str)
{
	char *ptr=str;	
	int count=0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
	return count;
}
