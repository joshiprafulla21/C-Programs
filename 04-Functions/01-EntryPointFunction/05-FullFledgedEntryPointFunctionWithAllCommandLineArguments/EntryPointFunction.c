#include<stdio.h> // stdio.h contains declaration printf()

	// Entry Point Function => Valid Return Type and 3 Parametera (int argc,char *argv[] char *envp[])
	
int main(int argc,char *argv[], char *envp[])
{
	// Variable declarations
	int i;

	// code
	printf("\n\n");
	printf("Hello World !!\n");		// library function
	printf("Number of command line arguments :%d\n\n",argc);
	
	printf("Command line arguments passed to this program are :\n\n");
	for(i = 0; i < argc; i++)
	{
		printf("Command line argument number %d = %s\n",(i+1),argv[i]);
	}
	
	printf("First 20 environmental variables passed to this program are :\n\n");
	for(i = 0; i < 20; i++)
	{
		printf("Environmental variable number %d = %s\n",(i+1),envp[i]);
	}

	printf("\n\n");
	
	return 0;
}