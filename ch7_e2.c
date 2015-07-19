// Function to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int triangularNumber = 0;
    
    for(int i = 1; i <= n; i++)
        triangularNumber += i;
        
    return triangularNumber;
}

int main (void)
{
    printf("Triangular Number 10 is %i\n",calculateTriangularNumber (10));
    printf("Triangular Number 20 is %i\n",calculateTriangularNumber (20));
    printf("Triangular Number 50 is %i\n",calculateTriangularNumber (50));
    
    return 0;
}
