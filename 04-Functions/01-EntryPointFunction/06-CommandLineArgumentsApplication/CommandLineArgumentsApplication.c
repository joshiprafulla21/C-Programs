#include<stdio.h> // stdio.h contains declaration printf()
#include<ctype.h> // ctype.h contains declaration of atoi()

	// Entry Point Function => Valid Return Type and 3 Parametera (int argc,char *argv[] char *envp[])
	
int main(int argc,char *argv[], char *envp[])
{
	// Variable declarations
	int i;
	int num;
	int sum = 0;
	
	// code
	/*
	**** THIS PROGRAM ADDS ALL COMMAND LINE ARGUMENTSGIVEN IN INTEGER FORMONLY AND OUTPUTS THE SUM
	
	**** DUE TO atoi() ALL COMMAND LINE ARGUMENTS OF TYPES OTHER THAN int  ARE IGNORED
	
	*/
	printf("Sum of all integer command line arguments is:\n\n");
	for(i = 1; i < argc; i++)
		/* Loop starts with 1 because i = 0 will result in argv[0] which is the name of the program itself i.e : 'CommandLineArgumentsApplication
		*/
	{
		num = atoi(argv[i]);
		sum = sum + num;
	}
	printf("Sum = %d\n\n",sum);
	
	return 0;
}
