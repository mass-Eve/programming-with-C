/*
        5
        4 5
        3 4 5
        2 3 4 5
        1 2 3 4 5
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
            printf("%d ", j);
        printf("\n");
    }
}