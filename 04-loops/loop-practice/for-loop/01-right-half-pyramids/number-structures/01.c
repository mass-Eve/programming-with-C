/*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
*/

#include<stdio.h>

void main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}