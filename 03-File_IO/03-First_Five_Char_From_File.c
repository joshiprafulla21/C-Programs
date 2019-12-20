// Write a program to print first five characters from the file
#include<stdio.h>
int main()
{
	// function declarations
	void PrintFirstFiveChars();
	
	//Code
	PrintFirstFiveChars();
	return 0;
}

void PrintFirstFiveChars()
{
	// Variable declarations
	FILE *fp = NULL;				// FILE is a structure defined in I/O library
	int iLimit = 1;
	char ch;
	
	// Code
	fp = fopen("FileWrite_Demo.txt","r");
	if(fp == NULL)
	{
		printf("Cannot open the file specified !! Try agin..\n");
	}
	else
	{
		printf("File opened in READ mode !!!\n");
		printf("Receiving first five characters from the file..\n\n");
		while(iLimit <= 5)
		{
			ch = getc(fp);
			printf("%c",ch);
			iLimit++;
		}
		printf("\nFile operation complete !!!!\n\n");
	}	
	printf("\nClosing the file..\n");
	fclose(fp);
	printf("\n\nFile closed !!\n");
}