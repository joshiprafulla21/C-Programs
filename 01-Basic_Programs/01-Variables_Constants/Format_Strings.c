// Program to illustrate different format strings
#include<stdio.h>
int main()
{
	int a = 13;
	printf("Decimal value of \'int a\' :%d\n",a);
	printf("Octal value of \'int a\' :%o\n",a);
	printf("Hexa-decimal value of \'int a\' in UPPER CASE :%X\n",a);
	printf("Hexa-decimal value of \'int a\' in lower case :%x\n",a);
	char ch = 'P';
	printf("Value of \'char ch\' :%c\n",ch);
	char str[] = "Prafulla Joshi";
	printf("Value of \'char str[]\' :%s\n",str);
	long num = 21101994L;
	printf("Value of \'long num\' :%ld\n",num);
	unsigned int b = 7;
	printf("Value of \'unsigned int b\' :%u\n",b);
	float f_num = 2110.1994f;
	printf("Value of \'float f_num\' :%f\n",f_num);
	printf("Value of \'float f_num\' :%4.2f\n",f_num);
	printf("Value of \'float f_num\' :%2.5f\n",f_num);
	double d_pi = 3.14159265358979323846;
	printf("Value of double precision floating point number i.e., \'double d_pi\' without Exponential :%g\n",d_pi);
	printf("Value of double precision floating point number i.e., \'double d_pi\'without Exponential in UPPER CASE :%E\n",d_pi);
	printf("Value of double precision floating point number i.e., \'double d_pi\' without Exponential in lower case :%e\n",d_pi);
	printf("Value of Double Hexadecimal 'd_pi' (Hexadecimal Letters In Upper Case) format : %A\n",d_pi);
	printf("Value of Double Hexadecimal 'd_pi' (Hexadecimal Letters In Lower Case) format : %a\n",d_pi);
	return 0;
}