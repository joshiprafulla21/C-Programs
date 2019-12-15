#include<stdio.h>
int SecondMaximum(int a[],int n);
int main()
{
	int n,a[20];
	printf("\nEnter the size of an array :");
	scanf("%d",&n);
	for(int i=0;i<5;i++)
	{
		printf("\nEnter an element :");
		scanf("%d",&a[i]);
	}
	printf("\nSecond Largest element=%d",SecondMaximum(a,n));
	return 0;
}

int SecondMaximum(int a[],int n)
{
	int i=0;
	int max1=0,max2=0;
	max1=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max1)
		{
			if(max1>max2)
				max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2)
		{
			max2=a[i];
		}
	}
	return max2;
}
		
