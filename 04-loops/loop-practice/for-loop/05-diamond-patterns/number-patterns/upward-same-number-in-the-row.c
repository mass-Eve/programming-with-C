/*
                1 
              2 2 2
            3 3 3 3 3
          4 4 4 4 4 4 4
        5 5 5 5 5 5 5 5 5
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        for (int num = 1; num <= (i-1)*2 + 1; num++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    // getch();
}