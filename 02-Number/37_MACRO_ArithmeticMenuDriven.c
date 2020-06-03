#include<stdio.h>
#include<stdlib.h>

#define ADD(x,a,b) ADD##x(a,b)
#define SUB(x,a,b) SUB##x(a,b)
#define MUL(x,a,b) MUL##x(a,b)
#define DIV(x,a,b) DIV##x(a,b)

//Addition of numbers :
int ADDint(int x,int y)
{
	return x+y;
}

float ADDfloat(float x,float y)
{
	return x+y;
}

double ADDdouble(double x,double y)
{
	return x+y;
}

//Subtratcion of numbers :

int SUBint(int x,int y)
{
	return x-y;
}

float SUBfloat(float x,float y)
{
	return x-y;
}

double SUBdouble(double x,double y)
{
	return x-y;
}

//Multiplication of numbers :

int MULint(int x,int y)
{
	return x*y;
}

float MULfloat(float x,float y)
{
	return x*y;
}

//Division of numbers :

int DIVint(int x,int y)
{
	return x/y;
}

float DIVfloat(float x,float y)
{
	return x/y;
}

int main()
{
	int ch;
	printf("1.Integer Addition\n2.Float Addition\n3.Double Addition\n");
	printf("4.Integer Subtraction\n5.Float Subtraction\n6.Double Subtraction\n");
	printf("7.Integer Multiplication\n8.Float Multiplication\n");
	printf("9.Integer Division\n10.Float Division\n11.Exit");
	printf("\nEnter the choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nInteger Addition :%d\n",ADD(int,10,5));
			break;
		case 2:
			printf("\nFloat Addition :%f\n",ADD(float,10.6f,5.9f));
			break;
		case 3:
			printf("\nDouble Addition :%lf\n",ADD(double,13.45,12.23));
			break;
		case 4:
			printf("\nInteger Subtraction :%d\n",SUB(int,74,23));
			break;
		case 5:
			printf("\nFloat Subtraction :%f\n",SUB(float,43.7f,5.2f));
			break;
		case 6:
			printf("\nDouble Subtraction :%lf\n",SUB(double,67.24,51.9));
			break;
		case 7:
			printf("\nInteger Multipication :%d\n",MUL(int,31,5));
			break;
		case 8:
			printf("\nFloat Multiplication :%f\n",MUL(float,23.5f,7.0f));
			break;
		case 9:
			printf("\nInteger Division :%d\n",DIV(int,91,7));
			break;
		case 10:
			printf("\nFloat Division :%f\n",DIV(float,33.33f,5.0f));
			break;
		case 11:
			exit(0);
			break;
		default:
			printf("\nWrong choice");
		
	}
	return 0;
}
