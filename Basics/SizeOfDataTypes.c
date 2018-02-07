#include<stdio.h>

int main()
{
	printf("The sizes of primitive data types on mu machine :\n");
	
	printf("char :%ld bytes\n",sizeof(char));
	printf("signed char :%ld bytes\n",sizeof(signed char));
	printf("unsigned char :%ld bytes\n",sizeof(unsigned char));
	
	printf("int :%ld bytes\n",sizeof(int));
	printf("signed int :%ld bytes\n",sizeof(signed int));
	printf("unsigned int :%ld bytes\n",sizeof(unsigned int));
	printf("short int :%ld bytes\n",sizeof(short int));
	printf("long int :%ld bytes\n",sizeof(long int));
	printf("long long int :%ld bytes\n",sizeof(long long int));
	printf("unsigned long long int :%ld bytes\n",sizeof(unsigned long long int));
	
	printf("float :%ld bytes\n",sizeof(float));
	
	printf("double :%ld bytes\n",sizeof(double));
	printf("long double :%ld bytes\n",sizeof(long double));
	
	return 0;
}
	
	
	
