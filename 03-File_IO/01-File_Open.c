// Write a program to open the file
#include<stdio.h>
int main()
{
	// function declarations
	void FileOpen();
	
	//Code
	FileOpen();
	return 0;
	
}

void FileOpen()
{
	// Variable declarations
	FILE *fp = NULL;				// FILE is a structure defined in I/O library
	
	// Code
	fp = fopen("FileOpen_Demo.txt","r");
	if(fp == NULL)
		printf("Cannot open the file specified !! Try agin..\n");
	else
		printf("File opened in READ mode !!!\n");
	
	printf("\n\nClosing the file..\n");
	fclose(fp);
	printf("\n\nFile closed !!\n");
}