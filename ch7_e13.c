// Program to sort an array of integers into ascending or decending order

#include <stdio.h>

void sort (int a[], int n, int x)
{
    int temp;
    
    if (x == 1) {
        for (int i = 0; i < n-1; i++)
            for (int j = i +1; j < n; j++)
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }
    else if (x == -1) {
        for (int i = 0; i < n-1; i++)
            for (int j = i +1; j < n; j++)
                if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }
    else {
        printf ("Invalid input\n");
    }
}

int main (void)
{
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
    void sort (int a[], int n, int x);
    
    printf ("The array before the sort:\n");
    
    for (int i = 0; i < 16; i++)
        printf ("%i ", array[i]);
        
    sort(array, 16, 1);
    
    printf ("\n\nThe array after the ascending sort:\n");
    
    for (int i = 0; i < 16; i++)
        printf ("%i ", array[i]);
        
    sort(array, 16, -1);
    
    printf ("\n\nThe array after the decending sort:\n");
    
    for (int i = 0; i < 16; i++)
        printf ("%i ", array[i]);
        
    printf ("\n");

    return 0;
}
