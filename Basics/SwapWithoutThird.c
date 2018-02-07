#include<stdio.h>

int main()
{
	int a=10;
	int b=20;
	
	
	printf("Before swapping a=%d\tb=%d",a,b);
	
	a=a+b;
	b=b-a;
	a=a-b;

	printf("After swapping a=%d\tb=%d",a,b);

	return 0	
}
