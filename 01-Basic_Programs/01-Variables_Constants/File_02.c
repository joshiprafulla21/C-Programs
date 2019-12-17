//	File_02 for Extern_Global_Variable_Multiple_Files
#include<stdio.h>

void change_count_two(void);

void change_count_two()
{
	global_count = global_count + 1;
	printf("global_count :%d\n",global_count);
}
