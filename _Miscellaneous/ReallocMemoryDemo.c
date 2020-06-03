//Write a program which checks whether realloc has allocated new mwmory or extended memory.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n;
	printf("\nEnter size of an array :");
	scanf("%d",&n);

	int array=(int*)malloc(n*sizeof(int));
	
	int *Old_Address=NULL;
	int *New_Address=NULL;
	
	Old_Address=(int*)malloc(n*sizeof(int));
	
	printf("\nEnter new size of an array :");
	scanf("%d",&m);
	
	New_Address=realloc(Old_Address,(n+m)*sizeof(m));
	
	if(Old_Address==New_Address)
		printf("\nMemory extended\n");
	else
		printf("\nNew Allocation\n");
		
	free(array);
	free(Old_Address);
	free(New_Address);

	return 0;
}
