#include<stdio.h>
void main()
{
    // main array
    int array[5] = {0, 8, 9, -4, 6};

    // a pointer to the main array
    int *ap = array;

    // A reverse array having the elements of the main array in reversed format
    int rev_array[5];

    // Accessing elements of the main array in reverse order and appending them in the rev_array;
    for (int i = sizeof(array)/4 - 1 ; i >= 0; i--)
    {
        rev_array[i] = *ap;
        *ap++ ;
    }

    // printing the rev_array
    for (int j = 0; j < sizeof(array)/4 ; j++)
    {
        printf("%d, ", rev_array[j] );
    }
}
