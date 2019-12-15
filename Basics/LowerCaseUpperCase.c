#include<stdio.h>
int getUpperCase(char);
int getLowerCase(char);

int main()
{
	char ch;
	printf("\nEnter the character :");
	scanf("%c",&ch);
	if(ch>=65 && ch<=91)
		printf("\nLower case of %c is :%c\n",ch,getLowerCase(ch));
	else
		printf("\nUpper case of %c is :%c\n",ch,getUpperCase(ch));
		
	return 0;
}

int getLowerCase(char ch)
{
	ch=ch+32;
	return ch;
}

int getUpperCase(char ch)
{
	ch=ch-32;
	return ch;
}
