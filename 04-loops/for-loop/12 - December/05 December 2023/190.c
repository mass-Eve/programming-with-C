/*
            5
          5 6
        5 6 7
      5 6 7 8 
    5 6 7 8 9 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int spaces = 1; spaces <= (10 - i*2); spaces++)
        {
            printf(" ");
        }
        for (int j = 5; j <= 5 + (i - 1); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}