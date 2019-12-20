// Write a program to write the file
#include<stdio.h>
int main()
{
	// function declarations
	void FileWrite();
	
	//Code
	FileWrite();
	return 0;
}

void FileWrite()
{
	// Variable declarations
	FILE *fp = NULL;				// FILE is a structure defined in I/O library
	
	// Code
	fp = fopen("FileWrite_Demo.txt","w");
	if(fp == NULL)
	{
		printf("Cannot open the file specified !! Try agin..\n");
	}
	else
	{
		printf("File opened in WRITE mode !!!\n");
		printf("Writing into the file..\n\n");
		fprintf(fp,"%d is integer and %f is floating point number !!",5,7.68);
		printf("File writing complete !!!!\n\n");
	}	
	printf("\nClosing the file..\n");
	fclose(fp);
	printf("\n\nFile closed !!\n");
}