// WAP to multiply two matrices 

#include <stdio.h>

void main()
{
    // Rows and Columns counter for Matrix 1
    int m1r, m1c;

    printf("Enter the number of rows in the matrix 1: ");
    scanf("%d", &m1r);
    printf("Enter the number of columns in the matrix 1: ");
    scanf("%d", &m1c);

    // Rows and Columns counter for Matrix 1
    int m2r, m2c;

    printf("\nEnter the number of rows in the matrix 2: ");
    scanf("%d", &m2r);
    printf("Enter the number of columns in the matrix 2: ");
    scanf("%d", &m2c);

    // This is matrix 1
    int arr1[m1r][m1c];

    // Taking the elements of matrix 1 as input from the user
    printf("\nEnter the elements for Matrix 'A'\n");
    for (int i = 0; i < m1r; i++)
    {
        for (int j = 0; j < m1c; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // This is matrix 2
    int arr2[m2r][m2c];

    // Taking the elements of matrix 2 as input from the user
    printf("\nEnter the elements for Matrix 'B'\n");
    for (int i = 0; i < m2r; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Printing the contents of Array 1
    printf("\nMatrix A is as follows -: \n");
    for (int i = 0; i < m1r; i++)
    {
        for (int j = 0; j < m1c; j++)
        {
            printf("%d, ", arr1[i][j]);
        }
        printf("\n");
    }

    // Printing the contents of Array 2
    printf("\nMatrix B is as follows -: \n");
    for (int i = 0; i < m2r; i++)
    {
        for (int j = 0; j < m2c; j++)
        {
            printf("%d, ", arr2[i][j]);
        }
        printf("\n");
    }

    // Checking if matrix multiplication is possible or not
    if (m1c != m2r)
    {
        printf("Matrix Multiplication Not Possible.");
    }
    else{

        // An array to store the result of the matrix multiplication
        int res[m1r][m2c];

        // A variable to store the sum of the digits before making them an element of the resultant array
        int sum = 0;

        // This loop iterates till the number of rows in the first matrix
        for (int i = 0; i < m1r; i++)
        {
            // This loop iterates till the number of columns in the second matrix
            // This is the loop from where we will get elements for our resultant matrix.
            // Every iteration of this loop generates an element which is then stored in the sum variable and is then added to the resultant matrix.
            for (int j = 0; j < m2c; j++)
            {
                sum = 0;

                // Ever 1 cycle of this loop (m1c times) generates an element, which is then appended to the reultant matrix
                for (int k = 0; k < m1c; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                res[i][j] = sum;
            }
        }

        // Print the contents of Resultant Array
        printf("\nMatrix Multiplication of the above two matries is: \n");
        for (int i = 0; i < m1r; i++)
        {
            for (int j = 0; j < m2c; j++)
                printf("%d\t", res[i][j]);
            printf("\n");
        }
    }
}