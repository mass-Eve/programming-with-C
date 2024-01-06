/*
        *
        * #
        * # *
        * # * #
        * # * # *
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
            if (j % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }
}