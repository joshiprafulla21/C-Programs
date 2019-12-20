// Write a program to print last 10 characters from the file
#include<stdio.h>
int main()
{
	// function declarations
	void PrintLastTenChars();
	
	//Code
	PrintLastTenChars();
	return 0;
}

void PrintLastTenChars()
{
	// Variable declarations
	FILE *fp = NULL;				// FILE is a structure defined in I/O library
	char ch;
	
	// Code
	fp = fopen("India_Pledge.txt","r");
	if(fp == NULL)
	{
		printf("Cannot open the file specified !! Try agin..\n");
	}
	else
	{
		printf("File opened in READ mode !!!\n");
		printf("Receiving last ten characters from the file..\n\n");
		
		fseek(fp,0L,2);		// Go to end of file
		fseek(fp,-10L,1);	// Go backwardby 10 bytes from current position i.e., from last
		//ch = getc(fp);
		while((ch = getc(fp)) != EOF)		// Keep on reading characters until EOF char is encountered
		{
			printf("%c",ch);
		}
		
		printf("\nFile operation complete !!!!\n\n");
	}	
	printf("\nClosing the file..\n");
	fclose(fp);
	printf("\n\nFile closed !!\n");
}