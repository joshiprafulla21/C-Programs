#include <stdio.h>
int main(void)
{
	// Variable declarations
	float f;
	float f_num = 1.7f;	//Simply change its value ONLY to get different output..
	
	//Code
	printf("\n");
	printf("Printing numbers from %f to %f :\n",f_num,(f_num * 10.0f));
	
	for(f = f_num; f <= (f_num * 10.0f); f = f + f_num)
	{
		printf("\t%f\n",f);
	}
	
	printf("\n");
	return 0;
}