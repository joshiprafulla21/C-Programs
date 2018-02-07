#include<stdio.h>
int Power(int,int);
int main()
{
	int x,n,result;
	printf("\nEnter the number and power");
	scanf("%d%d",&x,&n);	
	Power(x,n);
	return 0;
}
int Power(int x,int n)	
{
	int k=1;
	for(int i=0;i<n;i++)
	{
		k=k*x;
	}
	printf("power(%d,%d) =%d\n",x,n,k);
}	

