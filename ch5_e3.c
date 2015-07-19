// Prgram to divide one number by another

#include <stdio.h>

int main (void)
{
    int num1, num2;
    float result;
    
    printf("Type in two integer values.\n");
    scanf("%i %i", &num1, &num2);
    
    if(num2 == 0)
        printf("Division by zero.\n");
    else
    {
        result = (float) num1 / num2;
        printf("%i divided by %i equals %.3f\n", num1, num2, result);
    }

    return 0;
}
