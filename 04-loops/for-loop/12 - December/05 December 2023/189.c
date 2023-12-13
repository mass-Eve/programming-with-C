/*
            1
          2 1
        3 2 1
      4 3 2 1 
    5 4 3 2 1 
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
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}