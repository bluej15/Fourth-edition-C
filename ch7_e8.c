// Program to solve a quadratic equation

#include <stdio.h>

// Function to calculate the absolute value of a number

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
        
    return x;
}

// Function to compute the square root of a number

float squareRoot (float x)
{
    const float epsilon = .00001;
    float guess = 1.0;
    
    while (absoluteValue (guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;
        
    return guess;
}

// Function to determine discriminant

int discriminantTest (int a, int b, int c)
{
    int discriminant;
    
    discriminant = ((b * b) - (4 * a * c));
    
    return discriminant;
}


int main (void)
{
    int a, b, c;
    float negX, posX;
    
    printf ("What are your constants?\na:");
    scanf ("%i", &a);
    printf ("b:");
    scanf ("%i", &b);
    printf ("c:");
    scanf ("%i", &c);
    
    
    if (discriminantTest(a, b, c) < 0) {
        printf ("The roots to the equation are imaginary");
        return -1;
    }
    else {
        negX = (-b - (squareRoot(discriminantTest(a, b, c)))) / (2 * a);
        posX = (-b + (squareRoot(discriminantTest(a, b, c)))) / (2 * a);
    }
    
    printf ("The roots of the equation are %.2f and %.2f\n", negX, posX);

    return 0;
}
