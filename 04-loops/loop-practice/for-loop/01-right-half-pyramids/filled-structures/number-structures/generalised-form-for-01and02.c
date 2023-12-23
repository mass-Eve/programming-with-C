#include<stdio.h>

void main()
{
    int start, end;
    printf("Enter the start value of pattern: ");
    scanf("%d", &start);

    printf("Enter the end value of pattern: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        for (int j = start; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}