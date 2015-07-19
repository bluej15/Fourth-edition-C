// Function that raises an integer to a positive integer power

#include <stdio.h>

long int x_to_the_n (int x, int n)
{
    long int result = 1;
    
    for (int i = 0; i < n; i++)
        result *= x;
    
    return result;
}

int main (void)
{
    printf ("%li\n", x_to_the_n(2, 4));
    printf ("%li\n", x_to_the_n(3, 6));
    printf ("%li\n", x_to_the_n(4, 3));
    
    return 0;
}
