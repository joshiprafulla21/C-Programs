+#include<stdio.h>

int IsVowel(char);

int main()
{
	char ch;
	printf("Enter the character :");
	scanf("%c",&ch);
	
	IsVowel(ch);
	return 0;
}

int IsVowel(char ch)
{
	switch(ch)
	{
		case 'a':
			printf("Character is vowel\n");
			break;
		case 'e':
			printf("Character is vowel\n");
			break;
		case 'i':
			printf("Character is vowel\n");
			break;
		case 'o':
			printf("Character is vowel\n");
			break;
		case 'u':
			printf("Character is vowel\n");
			break;
		default:
			printf("Character is not vowel\n");
			break;
	}
	return 0;
}
