/*
            1
          1 2
        1 2 3
      1 2 3 4 
    1 2 3 4 5 
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
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}