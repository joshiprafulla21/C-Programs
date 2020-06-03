
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int num;
    int count = 0;
	int i = 0;
    
    printf("Enter limit of characters (integer) :\n");
    scanf("%d", &num);              			
	int SIZE = num + (num-1);

	char *str1 = (char*)malloc(SIZE*sizeof(char));
    char *str2 = (char*)malloc(SIZE*sizeof(char));

    printf("Enter space separated string :\n");
	scanf("%[^\n]",str1);

    while (str1[i] != '\0')
    {
        if(str1[i] != ' ')  
            str2[count++] = str1[i];  
        i++;
    }
 
    str2[count] = '\0';
	printf("\n%s",str2);  
}
