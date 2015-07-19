// Program to generate first 10 factorials

#include <stdio.h>

int main (void)
{
    printf("TABLE OF FACTORIALS\n\n");
    printf(" n    Factorial of n\n");
    printf("---   ---------------\n");
    
    int factorial = 1;
    int i = 1;
    
    for(int n = 1; n <= 10; n++)
    {
        while(i <= n)
        {
            factorial = factorial * i;
            i++;
        }
        
        printf(" %2i          %7i\n", n, factorial);
    }
    
    return 0;
}
