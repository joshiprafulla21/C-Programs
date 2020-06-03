// Program to illustrate constants

#include<stdio.h>
#define MY_PI 3.1415926535897932

enum weekdays
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDENSDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

enum months
{
	JANUARY,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};


enum numbers
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE = 5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum boolean
{
	TRUE = 1,
	FALSE = 0
};

int main()
{
	const double epsilon = 0.000001;
	enum weekdays day;
	day = FRIDAY;
	printf("FRIDAY is day number :%d\n",day+1);
	
	enum months month;
	month = OCTOBER;
	printf("OCTOBER is month number :%d\n",month+1);
	
	enum numbers num;
	num = NINE;
	printf("NINE is at :%d\n",num);
	
	enum boolean boolValue;
	boolValue = FALSE;
	printf("FALSE :%d\n",boolValue);	
	
	printf("MY_PI :%lf\n",MY_PI);
	printf("Area of Circle :%lf\n",(MY_PI*2.0*2.0));

	return 0;
}