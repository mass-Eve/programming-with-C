/*
              1
            2   3
          4   5   6
        7   8   9   10
*/

// 6, 4, 2, 1 >>> initial spaces
// 3 >>> between spaces are constant 

#include<stdio.h>
#include<conio.h>

void main()
{
    // print starting spaces
    for (int i = 1; i <= 4; i++)
    {
        for (int spaces = 1; spaces <= 6 - (i - 1)*2; spaces++)
        {
            printf(" ");
        }    

        // starting the iteration from 1
        int j = 1;

        // another variable k to store starting value of j
        int k = 0;

        // Expression to get the starting value of j for each iteration. 
        j += (i - 1);

        // sotring a copy of j in k
        k = j;

        for (j; j <= (k + (i - 1)); j++)
        {
            printf("%d   ", j);
        }

        // since we are updating j a huge number of times, we don't want to get the value of j again get update by j++ during the loop iteration. That is why after the loop of j is done, we are again updating the value of j with the value it started from (i.e k), so that the expression on line 31 should not return confused values.
        j = k;

        // New line
        printf("\n");
    }
}