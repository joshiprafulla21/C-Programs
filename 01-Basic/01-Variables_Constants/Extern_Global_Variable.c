// Program to illustrate external global variable

#include<stdio.h>
void change_count(void);
extern int global_count;
int main()
{
	printf("extern_global_count	:%d\n",global_count);
	change_count();
	return 0;
}

int global_count = 1;

void change_count()
{
	global_count = global_count + 1;
	printf("global_count :%d\n",global_count);
}

//➜  C_Basics gcc -c -o Extern_Global_Variable.o Extern_Global_Variable.c 
//➜  C_Basics gcc -o Extern_Global_Variable Extern_Global_Variable.o
//➜  C_Basics ./Extern_Global_Variable 
//extern_global_count	:1
//global_count :2

