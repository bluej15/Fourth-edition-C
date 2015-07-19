// Function to sum an array

#include <stdio.h>

int arraySum (int array[], int n)
{
    int total = 0;
    
    for (int i = 0; i < n; i++)
        total += array[i];
        
    return total;
}

int main (void)
{
    int values[6] = {5, 7, 2, 9, 10, 4};
    printf ("%i\n", arraySum(values, 6));
    
    int array[7] = {1, 3, 6, 9, 4, 8, 2};
    printf ("%i\n", arraySum(array, 7));
    
    int set[3] = {5, 7, 2};
    printf ("%i\n", arraySum(set, 3));

    return 0;
}
