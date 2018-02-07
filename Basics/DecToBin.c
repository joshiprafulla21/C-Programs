#include<stdio.h>
int toBinary(int);
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	toBinary(num);
}


int toBinary(int num)
{
	int arr[32],j=0,rem,i=1,bin=0,number=num;
	
	for(i=num,j=0;i>=0;i--,j++)
	{
		rem=num%2;
		arr[j]=rem;
		num=num/2;
	}
	printf("Binary number of %d is :",number);
	for(int i=j-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
} 
