// Program to calculate the average of an array of 10 floating point values

#include <stdio.h>

int main (void)
{
    float nums[10];
    float average, sum = 0;
    
    printf("Enter your numbers: ");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &nums[i]);
        sum += nums[i];
    }
    
    average = sum / 10;
    
    printf("The average is %f\n", average);

    return 0;
}
