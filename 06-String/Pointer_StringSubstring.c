//Write a program to accept two strinfs afrom user and check if string 1 is present in string 2 or not

#include<stdio.h>
int isSubstring(char*,char*);

int main()
{
	char str1[20];
	char str2[20];
	
	printf("\nEnter string 1 :");
	scanf("%s",str1);
	
	printf("\nEnter stirng 2 :");
	scanf("%s",str2);
	if(isSubstring(str1,str2))
		printf("\nSubString\n");
	else
		printf("\nNOT Substring\n");
	return 0;
}

int isSubstring(char *str1,char *str2)
{
	char *ptr1,*ptr2;
	ptr1=str1;
	ptr2=str2;
	int flag=0;
	while(*ptr2!='\0')
	{
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2++;
			flag=1;
		}
		else
		{
			ptr1++;
			flag=0;
		}
	}
	if(flag==1)
		return 1;
	else
		return 0;	
}
