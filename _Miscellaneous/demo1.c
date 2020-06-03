
/*
#include<stdio.h>
int main()
{	
	int n;
	n=4%5;
	printf("%d\n",n);
	return 0;
}*/


#include<stdio.h>
#define PRINTX printf("%d\n",x)
int main()
{
	int x=2,y,z;
	x*=3+2;
	PRINTX;
	x*=y=z=4;
	PRINTX;
	x=y==z;
	PRINTX;
	x=8;
	x==(y=z);
	PRINTX;
	return 0;
}


