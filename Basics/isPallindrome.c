#include<stdio.h>
int isPallindrome(int);

int main()
{
	int num,reverse;
	printf("\nEnter the number :");
	scanf("%d",&num);
	reverse=isPallindrome(num);
	if(num==reverse)
		printf("Number is pallindrome\n");
	else
		printf("Number is not palindrome\n");
	return 0;
}

int isPallindrome(int num)
{
	int rev=0,rem=0;
	while(num)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	return rev;
}
