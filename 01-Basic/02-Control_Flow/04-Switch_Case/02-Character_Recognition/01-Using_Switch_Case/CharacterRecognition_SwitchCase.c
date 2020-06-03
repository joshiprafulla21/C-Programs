#include<stdio.h>	// for printf()
//#include<conio.h>	//	for getch()

//ASCII value for 'A' to 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII value for 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII value for '0' to '9' => 48 to 57
#define CHAR_DIGIT_BEGINING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	// Variable declarations
	char ch;
	int ch_value;
	
	// Code
	printf("\n");
	
	printf("Enter the character :");
	ch = getchar();
	
	switch(ch)
	{
		// FALL THROUGH CONDITION
		case 'A':
		case 'a':
		
		case 'E':
		case 'e':
		
		case 'I':
		case 'i':
		
		case 'O':
		case 'o':
		
		case 'U':
		case 'u':
			printf("Character \'%c\' entered by you, is a VOWEL character from English alphabets !!\n\n",ch);
			break;	
		default:
			ch_value = (int)ch;
			
			// If the character has ASCII value between 65 to 90 OR between 97 to 122, it is still a letter of the alphabet, but it is a 'CONSONENT' and  not a 'VOWEL'
			
			if((ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
			{
				printf("Character \'%c\' entered by you, is a CONSONENT character from English alphabets !!\n\n",ch);
			}
			else if(ch_value >= CHAR_DIGIT_BEGINING && ch_value <= CHAR_DIGIT_ENDING)
			{
				printf("Character \'%c\' entered by you, is a DIGIT character !!\n\n",ch);
			}
			else
			{
				printf("Character \'%c\' entered by you, is a SPECIAL character !!\n\n",ch);
			}
			break;
	}	
	
	printf("Switch-Case block complete !!\n");
	
	return 0;
}
