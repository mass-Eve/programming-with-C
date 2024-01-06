/*
            9
          9 8
        9 8 7
      9 8 7 6 
    9 8 7 6 5 
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
        for (int j = 9; j >= 9 - (i - 1); j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}