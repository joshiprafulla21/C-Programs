//Trace the output snippet

#include<stdio.h>

//Non constant pointer constant data

int main()
{
	char name[]="Hello";
	const char *ptr=name;		// Here data is made constant and it can't be changed
	ptr[2]='R';
	while(*ptr!='\0')
	{
		printf("%c\n",*ptr++);
	}
	ptr++;
	printf("%d\n",*ptr);
	return 0;
}
