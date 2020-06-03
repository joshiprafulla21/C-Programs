#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[255];
    char c;
    char *ptr = str;

    int digitCount[10] = {0,0,0,0,0,0,0,0,0,0};

    //scanf("%s", str);
    // scanf("%[^\n]%*c", str);        // Take input until a new line is encountered

    // while(*ptr != '\0')
    while(scanf("%c", &c) == 1)
    {
        if (c >= '0' && c <= '9') {         // ASCII Value comparision
            digitCount[c - '0'] += 1;       // ASCII Value subtraction
        }
        // ptr++;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", digitCount[i]);
    }

    return 0;
}
