#include<stdio.h>

// A function the filter out all the unique elements form an array of integer elements
// int uniques(main_array, main_array_size, unique_array);
int uniques(int *arr, int len, int *uni)
{
    // A variable to count the unique elements
    int count = 0;

    // Main loop
    for (int i = 0; i < len; i++)
    {
        int isUnique = 1;
        for (int j = 0; j < count; j++)
        {
            if (*(arr+i) == *(uni+j))
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique == 1)
        {
            *(uni + count) = *(arr + i );
            count++ ;
        }
    }
    return count;
}


void main()
{
    // Number of elements in the array
    int n;
    printf("Enter the number of terms in the array: ");
    scanf("%d", &n);

    // An array of size n
    int array[n];

    // Taking the elements of the array as input from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    // An array of size same as the main array to store all the unique elements from the main array
    int unique[n];
    
    // Assigning the first element of the main array to this array's first element
    unique[0] = array[0];

    // Calling the function to filter all the unique elements and return the count of unique elements
    int unique_count = uniques(array, n, unique);

    printf("The total number of unique elements found are: %d\n", unique_count);

    // Print the original array element
    printf("Main Array: ");
    for (int i = 0; i < unique_count; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");


    // Print the unique array element
    printf("Unique Elements: ");
    for (int i = 0; i < unique_count; i++)
    {
        printf("%d, ", unique[i]);
    }
}