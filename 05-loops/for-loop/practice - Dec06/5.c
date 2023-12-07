/*
    1
    2 3
    4 5 6
    7 8 9 10
*/

#include <stdio.h>

void main() 
{
    int n = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}

/*

        i == 1;
                j = 0 and j < i
                    >>> 1
                && n = 2
        i == 2;
                j = 0 and j < 2
                    >>> 2 (as n == 2)
                && n = 3
                    >>> 3
                && n = 4
        i == 3;
                j = 0 and j < 3
                    >>> 4
                    && n = 5
                    >>> 5
                    && n = 6
                    >>> 6
                    && n = 7
        i == 4;
                j = 0 and j < 4
                    >>> 7
                    && n = 8
                    >>> 8
                    && n = 9
                    >>> 9
                    && n = 10 
                    >>> 10
                    && n = 11   

*/