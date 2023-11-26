// WAP to print fibonacci sequence upto n terms.
        // 0, 1, 1, 2, 3, 5, 8, 13, 21, ........., n
#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, pt;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    int a1 = -1, a2 = 1;

    for (i=1; i <= n; i++)
    {
        pt = a1 + a2;
        printf("%d, ", pt);
        a1 = a2;
        a2 = pt;
    }

    // getch();
}

/*
            WORKING

            0, 1, 1, 2, 3, 5, 8, 13, 21
        {
            a1 = -1 & a2 = 1
    i = 0;
            pt = a1 + a2            >>> 0

            a1 = a2                 (now a1 = 0)
            a2 = pt                 (now a2 = 1)
        }

    i = 1;
            we have a1 = 0, a2 = 1
            pt = 0 + 1              >>> 1
    
            a1 = a2 = 1
            a2 = pt = 1

    i = 2;
            pt = 1 + 1 = 2          >>> 2

            a1 = a2 = 1
            a2 = pt = 2

    i = 3; 
            pt = 1 + 2 = 3          >>> 3

            a1 = a2 = 2
            a2 = pt = 3

    i = 4;
            pt = 2 + 3 = 5          >>> 5

            a1 = a2 = 3
            a2 = pt = 5

    i = 5;
            pt = 3 + 5 = 8          >>> 8



*/
