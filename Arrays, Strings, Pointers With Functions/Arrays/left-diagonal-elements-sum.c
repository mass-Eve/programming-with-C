// WAP to calculate the sum of the left diagonal elements of the matrix

#include<stdio.h>

void main()
{
    // Size of the matrix
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    // Matrix of nXn size
    int array[n][n] ; 

    // Taking the elements as input from the user
    printf("Enter the elements of the matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at row (%d) and column (%d) : ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }

    // A pointer to the array
    int *ap = array[0];

    // A sum variable to store the sum
    int sum = 0;

    // Main calculation loop
    for (int i = 0; i < n; i++)
    {
        sum += *(ap + (n+1)*i);
    }

    // Sum
    printf("Sum = %d", sum);
}




/*
    4x4 = multiple(4+1)
        {00, 01, 02, 03},
        {04, 05, 06, 07},
        {08, 09, 10, 11},
        {12, 13, 14, 15},

    3x3 = multiple(3+1)
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
*/