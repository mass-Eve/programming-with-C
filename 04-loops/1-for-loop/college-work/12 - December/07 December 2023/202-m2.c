#include<stdio.h>

void main()
{
    for (int i = 9; i >= 1; i--)
    {
        if (i > 4)
        {
            for (int j = 9; j >= i; j--)
                printf("%d ", j);            
        }
        else{
            for (int k = 9; k >= 9 - (i - 1); k--)
                printf("%d ", k);
        }            
        printf("\n");
    }
}
