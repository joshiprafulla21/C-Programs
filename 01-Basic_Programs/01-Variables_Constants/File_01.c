//	File_01 for Extern_Global_Variable_Multiple_Files
#include<stdio.h>

void change_count_one(void);
extern int global_count;

void change_count_one()
{
	global_count = global_count + 1;
	printf("global_count :%d\n",global_count);
}