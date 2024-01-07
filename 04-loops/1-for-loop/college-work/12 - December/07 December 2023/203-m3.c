#include<stdio.h>

void main()
{
    for (int i = 9; i >= 1; i--)
    {
        if (i >= 5)
        {
            for (int j = i; j <= 9; j++)
            {
                printf("%d ", j);
            }
            printf("\n");            
        }
        else
        {
            for (int k = 5; k <= 8 - (4 - i); k++)
            {
                printf("%d ", k);
            }
            printf("\n");
        }    
    }
}
