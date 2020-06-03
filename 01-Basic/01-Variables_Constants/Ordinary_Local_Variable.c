// Program to illustrate ordinary local variable

#include<stdio.h>

void change_count(void);	// function prototype
int main()
{
	//	Code
	int a = 5;
	printf("a :%d\n",a);
	change_count();
	change_count();
	change_count();
	return 0;
}
//Definition of function declared and called from main() i.e change_count()
void change_count(void)
{
	int local_count = 0;
	local_count = local_count + 1;
	printf("local_count :%d\n",local_count);
}

// Three times same value of one local variable gets printed

//➜  C_Basics gcc -c -o Ordinary_Local_Variable.o Ordinary_Local_Variable.c 
//➜  C_Basics gcc -o Ordinary_Local_Variable Ordinary_Local_Variable.o
//➜  C_Basics ./Ordinary_Local_Variable 
//a :5
//local_count :1
//local_count :1
//local_count :1
