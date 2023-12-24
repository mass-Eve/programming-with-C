/*
        5
        5 4
        5 4 3
        5 4 3 2
        5 4 3 2 1
*/

#include<stdio.h>

void main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
            printf("%d ", j);
        printf("\n");
    }
}