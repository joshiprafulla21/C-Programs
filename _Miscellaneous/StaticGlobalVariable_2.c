#include<stdio.h>

extern void Increament();
extern void Display();

void Decreament()
{
	extern int iGlobal;
	//extern int iSGlobal;
	iGlobal--;
	//iSGlobal--;
}

int main()
{
	Display();
	Increament();
	Display();
	Decreament();
	Display();
}
