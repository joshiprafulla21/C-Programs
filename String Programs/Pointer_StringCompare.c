//Write a program which accept two strings and returns 0 if they are equal otherwise 		return -1

#include<stdio.h>
int stringCompare(char*,char*);
int main()
{
	char str1[20],str2[20];
	printf("\nEnter 1st string :");
	scanf("%s",str1);
	printf("\nEnter 2nd string :");
	scanf("%s",str2);
	if(stringCompare(str1,str2))
	{
		printf("\nStrings are equal\n");
	}
	else
	{
		printf("\nStrings are not equal\n");
	}
	return 0;
}


int stringCompare(char *str1,char *str2)
{
	char *ptr1,*ptr2;
	int count1=0,count2=0;
	ptr1=str1;
	ptr2=str2;

/*	while(*ptr1!='\0')
	{
		ptr1++;
		count1++;
	}
	while(*ptr2!='\0')
	{
		ptr2++;
		count2++;
	}*/
	while(*ptr1!='\0')
	{
		//if(count1==count2)
		//{
			if(*ptr1==*ptr2)
			{
				ptr1++;
				ptr2++;
			}
			else
			{
				return 0;
			}
		//}
		//else
			//return 0;
	}
	return 1;
}
