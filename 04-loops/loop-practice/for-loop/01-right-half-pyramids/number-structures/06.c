/*
        5
        4 4
        3 3 3
        2 2 2 2
        1 1 1 1 1
*/

#include<stdio.h>

void main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
            printf("%d ", i);
        printf("\n");
    }
}