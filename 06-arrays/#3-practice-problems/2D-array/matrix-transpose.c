// A program to transpose a matrix

#include<stdio.h>

void main()
{
    int rows, columns;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &columns);

    int matrix[rows][columns];
    int *m = matrix[0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter element at pos (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int transpose_matrix[columns][rows];
    int *tm = transpose_matrix[0];

    int no_of_iterations = columns;

    for (int i = 0; i < no_of_iterations; i++)
    {
        int base_value_position = rows*i;
        for (int j = 0; j < rows; j++)
        {
            int base_value = j * columns;
            *(tm + base_value_position + j) = *(m + i + base_value);
        }
    }   

    for (int k = 0; k < columns; k++)
    {
        for (int l = 0; l < rows; l++)
        {
            printf("%d\t", transpose_matrix[k][l]);
        }
    }
}