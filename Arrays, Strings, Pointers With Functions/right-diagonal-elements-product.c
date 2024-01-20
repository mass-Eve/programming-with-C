// WAP to calculate the product of the right diagonal elements of the matrix

#include<stdio.h>

void main()
{
    // The size of the matrix
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    // An array of size nXn
    int array[n][n];
    
    // Taking the elements of the array as input from the user
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element at row (%d) and column (%d) : ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }

    // A pointer to the array
    int *ap = array[0];

    // A variable to store the product of right-diagonal elements
    int product = 1;

    for (int i = 1; i <= n; i++)
    {
        product *= *(ap + (n-1)*i);
    }
    printf("sum = %d", product);
}

/*
    4x4 = multiple(4-1)
        {00, 01, 02, 03},
        {04, 05, 06, 07},
        {08, 09, 10, 11},
        {12, 13, 14, 15},

    3x3 = multiple(3-1)
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
*/