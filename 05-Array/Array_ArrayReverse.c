#include<stdio.h>
#define ARRAY_SIZE 6

// Entry Point Function
int main()
{
    // Variable declaration
    int arr[ARRAY_SIZE] = {10, 2, 1, 40, 7, 99};

    // Code

    printf("\nOriginal Array : [ ");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");


    for (int i = 0; i <(ARRAY_SIZE/2); i++)
    {
        arr[i] = arr[i] + arr[ARRAY_SIZE-1-i];
        arr[ARRAY_SIZE-1-i] = arr[i] - arr[ARRAY_SIZE-1-i];
        arr[i] = arr[i] - arr[ARRAY_SIZE-1-i];    
    }
    
    printf("\nIn-place Reversed Array : [ ");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n\n");
    return 0;
}
