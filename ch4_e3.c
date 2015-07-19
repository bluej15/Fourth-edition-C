// Program to generate fifth triangular number from 5 to 50

#include <stdio.h>

int main (void)
{   
    int triangularNumber = 0;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n    Sum from 1 to n\n");
    printf("---   ---------------\n");

    for(int n = 5; n <= 50; n += 5)
    {
        triangularNumber = n * (n + 1) / 2;
        printf("%2i          %4i\n", n, triangularNumber);
    }

    return 0;
}
