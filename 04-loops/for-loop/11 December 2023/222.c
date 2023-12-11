/*
                5 5
              4     4
            3         3
          2             2
        1                 1
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    int n = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        printf("%d", n);
        for (int spaces = 1; spaces <= (i - 1)*4 + 1; spaces++)
        {
            printf(" ");
        }
        printf("%d", n);
        printf("\n");
        n -= 1;
    }

    // getch();
}