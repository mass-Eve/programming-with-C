/*
        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
*/
  
#include <stdio.h>

int main()
{
    // printf("Hello World");
    
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= 10 - 2*i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int k = (i + 1); k < 2*i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
