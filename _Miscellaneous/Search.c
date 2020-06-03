#include<stdio.h>
#include<omp.h>
//using namespace std;

int main()
{
	
	int i,j,flag=0,key,arr[5];
	
	printf("Enter the array :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("\nEnter the key to search :");
	scanf("%d",&key);
	
	#pragma omp parallel
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[j]==key)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("Key found at position : %d\n",j);
	}
	else
	{
		printf("Key did not find\n");
	}
	return 0;
}
