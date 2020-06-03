#include<stdio.h>
int iGlobal=0;
static int iStatic=10;

void Increament()
{
	int iGlobal=0;
	iGlobal++;
	iStatic++;
}

void Decreament()
{
	int iStatic=10;
	iGlobal--;
	iStatic--;
}


int main()
{
	Increament();
	printf(" %d %d\n",iGlobal,iStatic);
	Decreament();
	printf(" %d %d\n",iGlobal,iStatic);
	Increament();
	printf(" %d %d\n",iGlobal,iStatic);
}	
	
