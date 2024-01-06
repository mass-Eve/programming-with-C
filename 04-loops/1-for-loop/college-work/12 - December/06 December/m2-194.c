#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= 8 - (i - 1)*2; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        for (int k = 1; k < i; k++)
        {
            if (i % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
        
    }

    return 0;
}
