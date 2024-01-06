/*
            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
*/

#include<stdio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        int num;
        // left side
        for (num = i; num <= (i-1)*2 + 1; num++)
        {
            printf("%d ", num);
        }

        // right side
        for (int rev_num = num - 2; rev_num >= i; rev_num--)
        {
            printf("%d ", rev_num);
        }
        printf("\n");
    }
}