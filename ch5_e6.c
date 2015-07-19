// Program to display the the digits of an integer written in words

#include <stdio.h>

int main (void)
{
    int number, rightDigit, newNum = 0;
    
    printf("Enter your number.\n");
    scanf("%i", &number);
    
    do
    {
        rightDigit = number % 10;
        newNum = newNum * 10 + rightDigit;
        number = number / 10;
    }
    while(number != 0);
    
    do
    {
        rightDigit = newNum % 10;
        switch(rightDigit)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
        newNum /= 10;
    }
    while(newNum != 0);
    
    printf("\n");

    return 0;
}
