// Arrange (or Sort) an array in descending order.

#include<stdio.h>
void main()
{
    int n; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // An Array of size (n)
    int array[n];

    // Taking the elements of array as input from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at position %d: ", i);
        scanf("%d", &array[i]);
    }

    // Printing the contents of array before sorting
    printf("Array elements before sorting in descending order: \n");
    for (int k = 0; k < n; k++)
        printf("%d, ", array[k]);

    // Sorting
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (array[j] > array[i])
            {
                int temp;
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
    }

    // Printing the contents of array after sorting
    printf("\nArray elements before sorting in descending order: \n");
    for (int k = 0; k < n; k++)
        printf("%d, ", array[k]);
}