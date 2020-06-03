#include<stdio.h>

int main()
{
	int number,x=1;
	printf("\nEnter the number :");
	scanf("%d",&number);
	while(x<=number)
	{
		printf("%d\n",number&x?1:0);
		
		x=x<<1;
	}
	return 0;
}
