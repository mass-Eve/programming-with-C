#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        // for (int s = 1; s <= 2*(i-1); s++)
        // {
        //     printf(" ");
        // }
        
        if (i <= 5)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 != 0)
                    printf("* ");
                else
                    printf("# ");
            }            
        }
        
        else if (i > 5 && i <= 9)
        {
            int l = i - 5;
            for (int k = 1; k <= 4 - (l - 1); k++)
            {
                if (k % 2 != 0)
                    printf("* ");
                else
                    printf("# ");
            }            
           
        }
        printf("\n");
    }

    return 0;
}
