#include<stdio.h>

// To access function that will help us in allocating the memory dynamically
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    // Declaring a dynamic array using calloc()
    int *dynamic_array;
    dynamic_array = (int *) calloc(n, sizeof(int));

    // taking elements from the user
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at pos %d: ", i);
        scanf("%d", &dynamic_array[i]);
        printf("\n");
    }

    // printing the elements
    printf("The size of this dynamically allocated array is: %d", n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The element at pos %d is: %d", i, dynamic_array[i]);
        printf("\n");
    }

    // freeing up the old allocation before reallocating the memeory
    free(dynamic_array);

    // Taking the new size from the user
    printf("Enter the new size to allocate the array with: ");
    scanf("%d", &n);

    // realocating the array using realloc() function
    dynamic_array = (int *) realloc(dynamic_array, n*sizeof(int));

    // checking if reallocation has been done correctly
    if (dynamic_array == NULL){
        printf("Reallocation failed!!");
        exit(1);
    }
    else{
        // Again taking elements from the user
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("Enter the element at pos %d: ", i);
            scanf("%d", &dynamic_array[i]);
            printf("\n");
        }

        // printing the new elements
        printf("The size of this dynamically allocated array is: %d", n);
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("The element at pos %d is: %d", i, dynamic_array[i]);
            printf("\n");
        }
    }
}