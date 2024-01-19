// Reverse An Array

// Include the neccessary Header File
#include<stdio.h>
#include<conio.h>

// Function Prototyping
void reverseArray(int *arr, int *rev, int len);

// Main function
void main()
{
    // The length of the main array
    int n;
    printf("Enter the length of the main array: ");
    scanf("%d", &n);

    // Main Array containing <n> elements
    int array[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    // An Array to store the elements in reversed format
    int rev_array[n];

    // Calling the reverseArray() function to reverse this array
    // It takes three arguments. first argument is the main array (which has to be reversed), the second argument is the array in which the reversed elements will be stored, and the last argument is the length of the main array.
    reverseArray(array, rev_array, n);

    // Printing the elements of the Main Array
    printf("Main Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");

    // Printing the elements of the Reversed Array
    printf("Reversed Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", rev_array[i]);
    }
    printf("\n");
}


// Function Declaration
void reverseArray(int *arr, int *rev, int len)
{
    for (int i = 0; i < len; i++)
    {
        *(rev + i) = *(arr + len - (i+1));
    }
}