// Program to determine least common multiple of two positive integers 

#include <stdio.h>

// Function to find greatest common divisor

int gcd (int u, int v)
{
    int temp;
    
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    return u;
}

// Function to find least common multiple

int lcm (int u, int v)
{
    if (u > 0 && v > 0) {
        int result = (u * v) / (gcd(u, v));
        return result;
    }
    else
        return -1;
}

int main (void)
{
    int result;

    result = lcm (150, 35);
    printf("The lcm of 150 and 35 is %i\n", result);
    
    result = lcm (10, 15);
    printf("The lcm of 10 and 15 is %i\n", result);
    
    printf("The lcm of 83 and 240 is %i\n", lcm (83, 240));

    return 0;
}
