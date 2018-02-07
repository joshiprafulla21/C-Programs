#include<stdio.h>
#define dexpr(x,y) printf(#x "/" #y " is %d\n",x/y)

int main()
{
	dexpr(10,5);
	return 0;
}


