#include<stdio.h>

// To access function that will help us in allocating the memory dynamically
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    // Declaring a dynamic array
    int *dynamic_array;
    dynamic_array = (int *) malloc(n*sizeof(int));

    // taking elements from the user
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at pos %d: ", i);
        scanf("%d", &dynamic_array[i]);
        printf("\n");
    }

    // printing the elements
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The element at pos %d is: %d", i, dynamic_array[i]);
        printf("\n");
    }
}