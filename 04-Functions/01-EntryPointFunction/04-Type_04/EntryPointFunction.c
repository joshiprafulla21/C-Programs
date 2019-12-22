#include<stdio.h> // stdio.h contains declaration printf()

	// Entry Point Function => Valid Return Type and 2 Parameter (int argc,char *argv[])
	
int main(int argc,char *argv[])
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
	printf("\n\n");
	
	return 0;
}