/*
                9
              8 9 
            7 8 9  
          6 7 8 9   
        5 6 7 8 9
          6 7 8 9   
            7 8 9  
              8 9 
                9
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
        for (int j = 9 - (i - 1); j <= 9; j++)
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
        for (int l = 5 + k; l <= 9; l++)
        {
            printf("%d ", l);
        }
        printf("\n");
    }

    // getch();
}