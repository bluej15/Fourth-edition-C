// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void)
{
    int Fibonacci1, Fibonacci2, FibonacciCur, i;
    
    Fibonacci1 = 0;
    Fibonacci2 = 1;
    
    printf("0\n1\n");
    
    for (i = 2; i < 15; i++)
    {
        FibonacciCur = Fibonacci1 + Fibonacci2;
        printf("%i\n", FibonacciCur);
        Fibonacci1 = Fibonacci2;
        Fibonacci2 = FibonacciCur;
    }

    return 0;
}
