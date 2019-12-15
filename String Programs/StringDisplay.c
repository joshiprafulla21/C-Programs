#include<stdio.h>
int main()
{
	char name[20];
	
	printf("\nEnter the string :");
	scanf("%s",name);
	char *ptr=name;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}
