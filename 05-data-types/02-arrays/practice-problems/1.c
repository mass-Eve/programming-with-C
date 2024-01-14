/*             A                  B
            [ 2 2 ]     |      [ 2 2 ]      |       [4 4]
            [ 2 2 ]     |      [ 2 2 ]      |       [4 4]

            [ A(0, 0), A(0, 1) ]        |       [ B(0, 0), B(0, 1) ]
            [ A(1, 0), A(1, 1) ]        |       [ B(1, 0), B(1, 1) ]

*/

#include<stdio.h>

void main()
{
    int size;
    printf("Enter the size of the array \nFor example -: for a 2x2 array, enter 2 : ");
    scanf("%d", size);

    int A[size][size];
    int B[size][size];
    int C[size][size];

    printf("Enter the elements for Array 'A'\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the element at position (%d, %d)", i, j);
            scanf("%d", A[i][j]);
        }
    }

    printf("Enter the elements for Array 'B'\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the element at position (%d, %d)", i, j);
            scanf("%d", B[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int a = 0, b = 0, sum = 0;
            a = A[i][j];
            b = B[i][j];

            sum = a + b;
            C[i][j] = sum;

            // printf("%d, ", A[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d, ", C[i][j]);
        }
    }
}