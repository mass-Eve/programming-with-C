// WAP to print the tribonaci sequence for a specified value of n.
        // 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, ......., n

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, pt;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    int a1 = 0, a2 = -1, a3 = 1;

    for (i=1; i <= n; i++)
    {
        pt = a1 + a2 + a3;
        printf("%d, ", pt);
        a1 = a2;
        a2 = a3;
        a3 = pt;
    }

    // getch();
}


/*              WORKING

        a1 = 0 | a2 = -1 | a3 = 1

        pt = a1 + a2 + a3               >>> 0

        a1 = a2
        a2 = a3
        a3 = pt

    i = 0
            a1 = 0 | a2 = -1 | a3 = 1

            pt = 0 - 1 + 1              >>> 0

            a1 = a2 = -1
            a2 = a3 = +1
            a3 = pt = 0

    i = 1
            a1 = -1 | a2 = +1 | a3 = 0

            pt = 0                      >>> 0

            a1 = a2 = +1
            a2 = a3 = 0
            a3 = pt = 0

    i = 2
            a1 = +1 | a2 = 0 | a3 = 0

            pt = 1                      >>> 1

            a1 = a2 = 0
            a2 = a3 = 0
            a3 = pt = 1

    i = 3
            a1 = 0 | a2 = 0 | a3 = 1

            pt = 1                      >>> 1

            a1 = a2 = 0
            a2 = a3 = 1
            a3 = pt = 1

    i = 4
            a1 = 0 | a2 = 1 | a3 = 1

            pt = 0 + 1 + 1              >>> 2

            a1 = a2 = 1
            a2 = a3 = 1
            a3 = pt = 2

    i = 5
            a1 = 1 | a2 = 1 | a3 = 2

            pt = 1 + 1 + 2              >>> 4

            a1 = a2 = 1
            a2 = a3 = 2
            a3 = pt = 4

    i = 6
            a1 = 1 | a2 = 2 | a3 = 4

            pt = 1 + 2 + 4              >>> 7

            a1 = a2 = 2
            a2 = a3 = 4
            a3 = pt = 7

    i = 7
            a1 = 2 | a2 = 4 | a3= 7

            pt = 2 + 4 + 7              >>> 13

            a1 = a2 = -1
            a2 = a3 = +1
            a3 = pt = 0

*/
