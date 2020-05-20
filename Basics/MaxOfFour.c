#include <stdio.h>

int main() {
    int max_of_four(int a, int b, int c, int d);

    int a, b, c, d;
    printf("Enter the 4 numbers :");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("Largest Number = %d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int m1, m2;

    // Get 1st greater number from a and b
    if (a > b)
        m1 = a;
    else
        m1 = b;
    // Get 1st greater number from c and d
    if (c > d)
        m2 = c;
    else
        m2 = d; 
    
    //check and return from the result 
    if (m1 > m2)
        return m1;
    else
        return m2;

    //return (m1=a?b?a:b) > (m2=c>d?c:d) ? m1 : m2;     // same result in one line    
}
