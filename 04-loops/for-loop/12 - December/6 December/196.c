/*
        *
        * # 
        * # * 
        * # * # 
        * # * # *
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }

    // getch();
}