/*Write a program to count the no of occurances of digits,white space characters(blank,tab,newlines) and of all other charatcers.*/

#include<stdio.h>

int main()
{
	int nwhite,nother,i,c;
	int ndigits[10];
	
	nwhite=nother=0;
	
	for(i=0;i<10;i++)
	{
		ndigits[i]=0;
	}
	
	while((c=getchar()) != EOF)
		if(c>='0' && c<='9')
			++ndigits[c-'\n'];
		else if(c==' ' || c=='\n' || c=='\t')
			++nwhite;
		else
			++nother;
		
	printf("Digits = ");
	for(i=0;i<10;i++)
		printf("%d",ndigits[i]);
	
	printf(", whitespace =%d and other =%d",nwhite,nother);

	return 0;
}
