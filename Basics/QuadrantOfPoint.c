/*
	Write a program to accept x and y co-ordinates of point and print the quadrant in which the point lies.
*/

#include<stdio.h>

int checkQuadrant(int,int);

int main()
{
	int x,y;
	printf("\nEnter x co-ordinate :");
	scanf("%d",&x);
	
	printf("\nEnter y co-ordinate :");
	scanf("%d",&y);
	
	checkQuadrant(x,y);
	return 0;
}

int checkQuadrant(int x,int y)
{
	if(x==0 && y==0)
		printf("\nPoint is at origin\n");
	else
		if(x==0 && (y>0 || y<0))
			printf("\nPoint is on Y axis :(0,Y)\n");
		else if(y==0 && (x>0 || x<0))
			printf("\nPoint is on X axis :(X,0)\n");
		else if(x>0 && y>0)
			printf("\nPoint lies in 1st quadrant :(+,+)\n");
		else if(x<0 && y>0)
			printf("\nPoint lies in 2nd quadrant :(-,+)\n");
		else if(x<0 && y<0)
			printf("\nPoint lies in 3rd quadrant :(-,-)\n");
		else
			printf("\nPoint lies in 4th quadrant :(+,-)\n");
			
	return 0;
}
