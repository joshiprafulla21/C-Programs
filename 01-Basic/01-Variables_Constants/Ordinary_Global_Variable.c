// Program to illustrate ordinary global variable
#include<stdio.h>
int global_count = 0;
void change_count_one(void);
void change_count_two(void);
int main()
{
	//	Code
	printf("global_count :%d\n",global_count);
	change_count_one();
	change_count_two();
	return 0;
}

void change_count_one()
{
	global_count = global_count + 1;
	printf("global_count :%d\n",global_count);
}

void change_count_two()
{
	global_count = global_count + 1;
	printf("global_count :%d\n",global_count);
}

//Three Different Global variable's value will get printed

//➜  C_Basics gcc -c -o Ordinary_Global_Variable.o Ordinary_Global_Variable.c
//➜  C_Basics gcc -o Ordinary_Global_Variable Ordinary_Global_Variable.o     
//➜  C_Basics ./Ordinary_Global_Variable 
//global_count :0
//global_count :1
//global_count :2