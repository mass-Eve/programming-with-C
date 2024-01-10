// WAP to print the following series of numbers ~
// 7, 26, 63, 124, ................. , n

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the no of terms here, n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Every term in this series can be obtained by ((i+1)^3 - 1)
        printf("%d, ", (((i + 1 ) * (i + 1 ) * (i + 1 )) - 1));
    }

    // getch();
}

/*
        n(terms) == 5

    | Value of <i> |   Value to be printed on console  | 
    |      1       | (1 + 1)^3 - 1 >>> 8 - 1 >>> 7     |
    |      2       | (2 + 1)^3 - 1 >>> 27 - 1 >>> 26   |
    |      3       | (3 + 1)^3 - 1 >>> 64 - 1 >>> 63   |
    |      4       | (4 + 1)^3 - 1 >>> 125 - 1 >>> 124 |
    |      5       | (5 + 1)^3 - 1 >>> 216 - 1 >>> 215 |

*/