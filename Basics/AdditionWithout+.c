#include<stdio.h>

int main()
{
	int num1,num2,result;
	
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	
	printf("\nEnter 2nd number :");
	scanf("%d",&num2);
	
	result=num1-(-num2);
	printf("\nAddition=%d\n",result);
	
	return 0;
}
