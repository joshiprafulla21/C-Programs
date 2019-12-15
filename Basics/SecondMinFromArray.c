#include<stdio.h>
int SecondMin(int a[],int n);
int main()
{
	int a[20],n;
	printf("\nEnter the size of an array :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nEnter an element :");
		scanf("%d",&a[i]);
	}
	printf("\nSecond minimum=%d",SecondMin(a,n));
	return 0;
}


int SecondMin(int a[],int n)
{
	int i=0;
	int min1=0,min2=0;
	min1=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min1)
		{
			if(min1>min2)
				min2=min1;
			min1=a[i];
		}
		/*else if(a[i]>min2)
		{
			min2=a[i];
		}*/
	}
	return min2;
}
