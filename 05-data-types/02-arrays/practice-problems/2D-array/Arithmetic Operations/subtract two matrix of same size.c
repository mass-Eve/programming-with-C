/*             A                  B
            [ 2 2 ]     |      [ 2 2 ]      |       [4 4]
            [ 2 2 ]     |      [ 2 2 ]      |       [4 4]

            [ A(0, 0), A(0, 1) ]        |       [ B(0, 0), B(0, 1) ]
            [ A(1, 0), A(1, 1) ]        |       [ B(1, 0), B(1, 1) ]

*/

#include<stdio.h>

void main()
{
    // Taking the size of the array as input from the user
    int size;
    printf("Enter the size of the matrix \nFor example -: for a 2x2 matrix, enter 2 : ");
    scanf("%d", &size);

    // Array 1 of size: size x size
    int arr1[size][size];

    // Array 2 of size: size x size
    int arr2[size][size];
    
    // Array 3 of size: size x size which will store the sum of Array 1 and Array 2
    int arr3[size][size];

    // Taking the elements of matrix 1 as input from the user
    printf("Enter the elements for Matrix 'A'\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Taking the elements of matrix 2 as input from the user
    printf("Enter the elements for Matrix 'B'\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    int op;
    printf("Which matrix to subtract? \nTo Subtract Matrix A from Matrix B, enter 1 \nTo Subtract Matrix B from Matrix A, enter 2 \n:");
    scanf("%d", &op);

    // Subtracting the matrices or array 1 and array 2 and appending the results on the specified position in the array 3 or another matrix 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int a = 0, b = 0, sum = 0;
            a = arr1[i][j];     // To get the element at (i, j) position from array 1
            b = arr2[i][j];     // To get the element at (i, j) position from array 2

            // subtracting the individual elements to get the element for the result matrix
            if (op == 1)
                sum = b - a;
            else if (op == 2)
                sum = a - b;
            else
                printf("Invalid Input!!!");

            // Writing the output of sum in the array 3
            arr3[i][j] = sum;
        }
    }

    // Printing the contents of Array 1
    printf("\nMatrix A is as follows -: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d, ", arr1[i][j]);
        }
        printf("\n");
    }

    // Printing the contents of Array 2
    printf("\nMatrix B is as follows -: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d, ", arr2[i][j]);
        }
        printf("\n");
    }

    // Printing the contents of Array 3
    printf("\nThe subtraction of the above two matrices is as follows -: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d, ", arr3[i][j]);
        }
        printf("\n");
    }
}