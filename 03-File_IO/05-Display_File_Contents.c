// Write a program to display all contents of the file
#include<stdio.h>
int main()
{
	// function declarations
	void DisplayFileContents();
	
	//Code
	DisplayFileContents();
	return 0;
}

void DisplayFileContents()
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
		printf("Displaying contents of the file..\n\n");
		
		while((ch = getc(fp)) != EOF)		// Keep on reading characters until EOF char is encountered
		{
			printf("%c",ch);
		}
		
		printf("\n+++++ File operation complete !!!! ++++++\n\n");
	}	
	printf("\nClosing the file..\n");
	fclose(fp);
	printf("\n\nFile closed !!\n");
}
