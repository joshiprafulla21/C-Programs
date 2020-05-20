/**
 *      ** HACKER-RANK PROBLEM **
 * 
 * In this problem, you need to print the pattern of the following form containing the numbers from 1 to n.
 * 
 *          INPUT : 4
 *          OUTPUT :
 *                          4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4  
 *                       
 * */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max(a, b) ((a > b) ? a : b)

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int row, col;
    for(row = -n+1; row < n; row++)
    {
        for(col = -n+1; col < n; col++)
        {
            int distance_from_center = max(abs(row),abs(col));
            printf("%d ", distance_from_center + 1);
        }
        printf("\n");
    }
    return 0;
}