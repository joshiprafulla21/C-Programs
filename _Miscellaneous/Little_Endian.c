#include<stdio.h>
int main(){
    int i = 1024;
    char *ptr = &i;
    printf("%d",*ptr);
    return 0;
}