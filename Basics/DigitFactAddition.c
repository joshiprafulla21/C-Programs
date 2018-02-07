#include<stdio.h>
int getDigitFactAddition(int);

int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	
	int result=getDigitFactAddition(num);
	printf("\nAddition of factorial of digits :%d\n",result);
	return 0;
}

int getDigitFactAddition(int num)
{
	int rem,result=0;
	
	while(num)
	{
		rem=num%10;
		int fact=1;
		for(int i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		result+=fact;
		num=num/10;
	}
	return result;
}	
