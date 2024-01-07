#include<stdio.h>

void main()
{
    for (int i = 9; i >= 5; i--)
    {
        for (int j = i; j <= 9; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int k = 5; k <= 8; k++)
    {
        for (int l = 5; l <= 8 - (k - 5); l++)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
}
