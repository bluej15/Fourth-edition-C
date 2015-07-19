// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, rightDigit, sum = 0;
    
    printf("Enter your number.\n");
    scanf("%i", &number);
    
    while(number != 0)
    {
        rightDigit = number % 10;
        sum += rightDigit;
        number = number / 10;
    }
    
    printf("%i\n", sum);

    return 0;
}
