#include <stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= (i - 1)*2; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 5 - (i - 1); j++)
        {
            if (i % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        for (int k = 1; k <= 5 - i; k++)
        {
            if (i % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");   
    }
}
