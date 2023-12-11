/*
        5                 5
          4             4
            3         3
              2     2
                1 1
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        printf("%d", i);
        for (int spaces = 1; spaces <= (i - 1)*4; spaces++)
        {
            printf(" ");
        }
        printf("%d", i);
        printf("\n");
    }

    // getch();
}
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        printf("%d", i);
        for (int spaces = 1; spaces <= (i - 1)*4; spaces++)
        {
            printf(" ");
        }
        printf("%d", i);
        printf("\n");
    }

    // getch();
}