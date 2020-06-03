//Trace the output snippet
#include<stdio.h>
int main()
{
	char name[]="Hello";
	char *ptr=name;
	char *ptr2=&name[2];
	printf("%c",*ptr2);
	int count=0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
	
	printf("\nLength of string :%d\n",count);
	return 0;
}
