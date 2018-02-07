//Trace the output snippet
#include<stdio.h>

// Non constant pointer Non constant data

int main()
{
	char name[]="Hello";
	char *ptr=name;
	ptr[2]='R';
	while(*ptr!='\0')
	{
		printf("%c\n",*ptr++);
	}
	ptr++;
	printf("%d\n",*ptr);
	return 0;
}
