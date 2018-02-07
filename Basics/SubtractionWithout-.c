#include<stdio.h>

int main()
{
	int num1,num2,count=0;
	
	printf("\nEnter 1st number :");
	scanf("%d",&num1);
	
	printf("\nEnter 2nd number :");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		while(num1>num2)
		{
			count++;
			num2++;
		}
	}
	else
	{
		while(num1<num2)
		{
			count--;
			num1++;
		}
	}
	printf("\nSubtraction =%d\n",count);
	return 0;
}	
