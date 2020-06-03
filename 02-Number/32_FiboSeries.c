#include<stdio.h>
int Fibo(int);

int main()
{
	int limit;
	printf("Enter the limit of fibonacci series :");
	scanf("%d",&limit);
	Fibo(limit);

}


int Fibo(int limit)
{
	int i,prev=0,num=1,next_num;
	printf("First %d fibonacci numbers are :\n",limit);
	printf("%d\n",prev);
	printf("%d\n",num);
	for(i=0;i<=limit;i++)
	{
		next_num=num+prev;
		printf("%d\n",next_num);
		prev=num;
		num=next_num;
		//prev=num;
		
	}
	return 0;
}
