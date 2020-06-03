//Progran to accept number from user and print number line
//	e.g.,if number given by user is 4 then, output : -4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>
int main()
{
	//Code
	int iNum,i;
	printf("Enter the number :");
	scanf("%d",&iNum);
	printf("Number line :\n");
	for(i = (-iNum*2)+iNum; i <= iNum; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}