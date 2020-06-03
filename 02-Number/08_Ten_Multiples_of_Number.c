//Progran to accept number from user and print ten multiples of that number
#include<stdio.h>
int main()
{
	//Code
	int iNum,i;
	printf("Enter the number :");
	scanf("%d",&iNum);
	printf("10 Multiples of %d\n",iNum);
	for(i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n",iNum,i,(iNum*i));
	}
	printf("\n");
	return 0;
}