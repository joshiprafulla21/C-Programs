#include<stdio.h>
int add();
int main()
{
	add();
	add(1,2);
	add(1,2,3);
	printf("main executed\n");
	return 0;
}

int add()
{
	printf("add executed\n");
	return 0;
}
