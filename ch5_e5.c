// Program to reverse the digits of a number and handle 0

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int number, rightDigit;
    bool isNeg;
    
    printf("Enter your number.\n");
    scanf("%i", &number);
    
    if(number < 0)
    {
        number = -number;
        isNeg = true;
    }
    
    do
    {
        rightDigit = number % 10;
        printf("%i", rightDigit);
        number = number / 10;
    }
    while(number != 0);
    
    if(isNeg)
        printf("-");
    
    printf("\n");

    return 0;
}
