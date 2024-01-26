#include <stdio.h>

void main() 
{
    // Maximum size of the array
    int size;
    printf("Enter the maximum capacity of the array: ");
    scanf("%d", &size);

    // Declaring an array of size <size>
    int arr[size];

    // No. of elements to be entered
    int n;
    printf("Enter the number of elements you would like to enter now: ");
    scanf("%d", &n);

    // Error checking
    if (n > size) 
    {
        printf("Error: Number of elements exceeds array capacity.\n");
    }

    else
    {
        // Taking the elements from the user : 
        printf("Enter the elements please:\n", n);
        for (int i = 0; i < n; i++) 
        {
            printf("Enter the element at position %d: ", i);
            scanf("%d", &arr[i]);
        }

        // Assign NULL to the remaining elements if any
        for (int i = n; i < size; i++) 
        {
            arr[i] = NULL;
        }

        // Displaying the array elements
        printf("The Elements in the Array are as follows : ");
        for (int i = 0; i < size; i++) {
            if (arr[i] == NULL)
            {
                printf("Element %d: NULL\n", i);
            }
            else 
            {
                printf("Element %d: %d\n", i, arr[i]);
            }
        }
    }

}