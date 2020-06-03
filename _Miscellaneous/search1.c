#include<stdio.h>
#include<omp.h>
//using namespace std;

int main()
{
	
	int x=1,th_id,nthreads,i,j,flag=0,key,arr[5];
	
	printf("Enter the array :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("\nEnter the key to search :");
	scanf("%d",&key);
	
	#pragma omp parallel
	//#pragma omp parallel private(th_id) shared(nthreads)
	{
	
	{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[j]==key)
			{
				th_id=omp_get_thread_num();
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		x=0;
	}
}
}
if(x==0)
{	
	printf("Key found from thread %d at position :%d\n",th_id,j);
}
else
{
	printf("Key didn't find from thread %d ",th_id);
}
	

	return 0;
}
