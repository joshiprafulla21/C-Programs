#include<stdio.h>
int isSubString(char*,char*);

int main()
{
	char str1[20];
	char str2[20];
	printf("\nEnter string 1 :");
	scanf("%s",str1);
	printf("\nEnter string 2 :");
	scanf("%s",str2);
	
	if(isSubString(str1,str2))
		printf("\nSubstring\n");
	else
		printf("\nNOT Substring\n");
	return 0;
}

int isSubString(char str1[],char str2[])
{
	char *ptr1,*ptr2;
	ptr1=str1;
	ptr2=str2;
	
	while(*ptr2!=*ptr1)
		ptr1++;
	while(ptr1!='\0')
	{
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2++;
		}
		else
			return 0;
	}
	return 1;
	
}
