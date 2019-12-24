#include<stdio.h>
int main(int argc,char *argv[], char *envp[])
{
	// FUnction declarations
	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int,int);
	int MyDivision(int,int);
	
	// Variable declarations
	int result_subtraction;
	int a_multiplication,b_multiplication;
	int a_division,b_division,result_division;
	
	// Code
	
	/*  ADDITION	*/
	
	MyAddition();	// function call
	
	/*	SUBTRACTION	*/
	result_subtraction = MySubtraction();
	printf("\n\n");
	printf("Subtraction = %d\n", result_subtraction);

	/*	MULTIPLICATION	*/
	printf("Enter value for a : ");
	scanf("%d", &a_multiplication);

	printf("\n\n");
	printf("Enter value for b : ");
	scanf("%d", &b_multiplication);

	MyMultiplication(a_multiplication, b_multiplication); //function call

	/*	DIVISION	*/
	printf("Enter value for a : ");
	scanf("%d", &a_division);

	printf("\n\n");
	printf("Enter value for b : ");
	scanf("%d", &b_division);
	
	result_division = MyDivision(a_division,b_division);
	
	printf("Division = %d\n",result_division);

	return 0;

}

void MyAddition(void) //function definition
{
	//variable declarations : local variables to MyAddition()
	int a, b, sum;

	//code
	printf("\n\n");
	printf("Enter value for a : ");
	scanf("%d", &a);

	printf("\n");
	printf("Enter value for b : ");
	scanf("%d", &b);

	sum = a + b;

	printf("\n");
	printf("Sum Of %d and %d = %d\n", a, b, sum);
}

// *** Function definition of MySubtraction() ******
int MySubtraction(void) //function definition
{
	//variable declarations : local variables to MySubtraction()
	int a, b, subtraction;

	//code
	printf("\n\n");
	printf("Enter value for a : ");
	scanf("%d", &a);

	printf("\n");
	printf("Enter value for b : ");
	scanf("%d", &b);

	subtraction = a - b;
	return subtraction ;
}

// *** Function definition of MyMultiplication() ******
void MyMultiplication(int a, int b) //function definition
{
	//variable declarations : local variables to MyMultiplication()
	int multiplication;

	//code
	multiplication = a * b;

	printf("\n\n");
	printf("Multiplication of %d and %d = %d\n\n", a, b, multiplication);
}

// *** Function definition of MyDivision() ******
int MyDivision(int a, int b) //function definition
{
	//variable declarations : local variables to MyDivision()
	int division;

	//code
	if (a > b)
		division = a / b;
	else
		division = b / a;

	return division;
}