// Program to illustrate local static variable
#include<stdio.h>
void change_count(void);	//function prototype
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
	static int local_count = 0;			// make variable to remember its old value
	local_count = local_count + 1;
	printf("local_static :%d\n",local_count);
}

// Three times same incrementing values of one local variable gets printed

//➜  C_Basics gcc -c -o Local_Static_Variable.o Local_Static_Variable.c    
//➜  C_Basics gcc -o Local_Static_Variable Local_Static_Variable.o
//➜  C_Basics ./Local_Static_Variable 
//a :5
//local_static :1
//local_static :2
//local_static :3
