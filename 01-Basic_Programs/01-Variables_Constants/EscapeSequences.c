//Program to illustrate different escape sequences in C

#include<stdio.h>

int main()
{
	printf("\'New line\' :\\n\n");
	printf("\'Horizontal tab\' :\\t\n");
	printf("\'Double quotes\' :\\\" \\\"\n");
	printf("\'Single quotes\' :\\\' \\\'\n");
	printf("\'BACKSPACE\' :\\b\n");
	printf("\'Carriage return\' :\\r\n");
	printf("Demonstrating \r carriage return using \\r Escape Sequence.\n");
	printf("Demonstrating \x41 using \\xhh Escape Sequence.\n");
	printf("Demonstrating \102 using \\000 Escape Sequence\n");
	
	return 0;
}