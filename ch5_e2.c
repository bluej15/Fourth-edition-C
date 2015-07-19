// Program to determine if one number is divisable by another

#include <stdio.h>

int main (void)
{
    int num1, num2;
    
    printf("Type in two integer values.\n");
    scanf("%i %i", &num1, &num2);
    
    if(num1 % num2 == 0)
        printf("%i is evenly divisable by %i\n", num1, num2);
    else
        printf("%i is not evenly divisable by %i\n", num1, num2);

    return 0;
}
