#include<stdio.h>

int main() 
{
    // char* text = get_input_text();
    // char ****document = (char****)malloc(sizeof(char***))
    char document[1][1][][] = {
                            {
                                {"Learning", "C", "is", "fun"}
                            },
                            {
                                {"Learning", "pointers", "is", "more", "fun"},
                                {"It", "is", "good", "to", "have", "pointers"}
                            }
                        };

    // int sentences = **(*(document+2)
    // char ***para = ***(document + 2);
    char **sent;
    char *word;
    // int sentences = document[2-1];

    // printf("sentences : %d\n", sentences);
    printf("para : %s ", document[1][0][0]);

    return 0;
}



