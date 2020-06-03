// Program to illustrate extern global variable with multiple files

#include<stdio.h>
int global_count = 0;
void change_count(void);

int main()
{
	printf("global_count :%d\n",global_count);
	change_count_one();
	change_count_two();
	return 0;
}

void change_count()
{
	global_count = global_count + 1;
	printf("global_count :%d\n",global_count);
}