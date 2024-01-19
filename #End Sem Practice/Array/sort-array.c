// Sort an Array

// Include the necessary header files 

#include<stdio.h>           // Standard I/O Header file
#include<conio.h>           // Console Header file

// Function Prototyping
void sortArray(int *, int, int);

// Main function
void main()
{
    // Length of array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // An integer array containing <n> elements
    int array[n];

    // Accepting the elements of the array from the user
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &array[i]);
    }

    // Printing the array elements before sorting them
    printf("Array before getting sorted is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }

    // Asking the user to sort in which fashion, Ascending Order or Descending Order 
    int order_choice;
    printf("\nEnter 1 to sort the array in 'Ascending Order' and \nEnter 2 to sort the array in 'Descending Order' : ");
    scanf("%d", &order_choice);


    // Calling the user-defined function <sortArray> to sort our Array
    // The first argument it takes is a pointer to the array, the second argument it takes is the length of that array, and the final argument it takes is the choice of sorting
    sortArray(array, n, order_choice);

    // Printing the Array after sorting it
    printf("Array after getting sorted is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }

    // getch();
}

// Function Definition
void sortArray(int *arr, int len, int oc)
{
    if (oc == 1)
    {
        printf("Sorting the array in Ascending Order !\n");
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (*(arr + j) > *(arr + i))
                {
                    int temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
        }
    }
    if (oc == 2)
    {
        printf("Sorting the array in Descending Order !\n");
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (*(arr + j) < *(arr + i))
                {
                    int temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
        }
    }
}