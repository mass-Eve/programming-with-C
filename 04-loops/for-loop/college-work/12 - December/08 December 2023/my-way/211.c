/*
                9
              9 8 
            9 8 7  
          9 8 7 6   
        9 8 7 6 5
          8 7 6 5   
            7 6 5  
              6 5 
                5
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2 ; spaces++)
        {
            printf(" ");
        }
        for (int j = 9; j >= 9 - (i - 1); j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int k = 1; k <= 4; k++)
    {
        for (int spaces = 1; spaces <= k*2; spaces++)
        {
            printf(" ");
        }
        for (int l = 9 - k; l >= 5; l--)
        {
            printf("%d ", l);
        }
        printf("\n");
    }

    // getch();
}