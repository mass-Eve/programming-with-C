/*
1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7 
    1 2 3 4 5 
      1 2 3 
        1 
*/

#include <stdio.h>

int main()
{
    // printf("Hello World");
    
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= 2*(i-1); s++)
        {
            printf(" ");
        }
        int j = 1;
        for (j; j <= 5 - (i-1); j++)
        {
            printf("%d ", j);
        }
        for (int k = j; k <= 11 - 2*i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
