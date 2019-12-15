/*
	Write a program to implement all arithmetic operations on two numbers
	1)Addition
	2)Subtraction
	3)Multiplication
	4)Division
	5)Modulo %
	6)Square root	
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Add(int,int);
int Sub(int,int);
int Mul(int,int);
float Div(float,float);
int Mod(int,int);
int SquareRoot(int);

int main()
{
	int number,num1,num2,ch;
	float n1,n2;
	printf("--MENU--\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulo\n");
	printf("6.Square Root\n");
	printf("7.Exit\n");
	printf("\nEnter the choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter 1st number :");
			scanf("%d",&num1);
			printf("\nEnter 2nd number :");
			scanf("%d",&num2);
			
			printf("\nAddition of %d and %d is %d\n",num1,num2,Add(num1,num2));
			break;
		case 2:
			printf("\nEnter 1st number :");
			scanf("%d",&num1);
			printf("\nEnter 2nd number :");
			scanf("%d",&num2);
			
			printf("\nSubtraction of %d and %d is %d\n",num1,num2,Sub(num1,num2));
			break;
		case 3:
			printf("\nEnter 1st number :");
			scanf("%d",&num1);
			printf("\nEnter 2nd number :");
			scanf("%d",&num2);
			
			printf("\nMultiplication of %d and %d is %d\n",num1,num2,Mul(num1,num2));
			break;
		case 4:
			printf("\nEnter 1st number :");
			scanf("%f",&n1);
			printf("\nEnter 2nd number :");
			scanf("%f",&n2);
			
			printf("\nDivision of %f and %f is %f\n",n1,n2,Div(n1,n2));
			break;
		case 5:
			printf("\nEnter 1st number :");
			scanf("%d",&num1);
			printf("\nEnter 2nd number :");
			scanf("%d",&num2);
			
			printf("\nResult of %d and %d is %d\n",num1,num2,Mod(num1,num2));
			break;
		case 6:
			printf("\nEnter 1st number :");
			scanf("%d",&number);
			
			
			printf("\nSquare root of %d is %d\n",number,SquareRoot(number));
			break;
		case 7:
			exit(0);
			break;
		default:
			printf("\nSorry,wrong choice.\n");
	}
	return 0;
}


int Add(int num1,int num2)
{
	return num1+num2;
}

int Sub(int num1,int num2)
{
	return num1-num2;
}

int Mul(int num1,int num2)
{
	return num1*num2;
}

float Div(float n1,float n2)
{
	return n1/n2;
}	

int Mod(int num1,int num2)
{
	return num1%num2;
}

int SquareRoot(int number)
{
	//return sqrt(number);
	float i;
	for(i=0.1;i<=number;i+=0.1)
	{
		if(i*i==number)
		{
			break;
		}
	}
	return i;
}
