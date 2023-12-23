/*
        1
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
*/

#include<stdio.h>

void main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}