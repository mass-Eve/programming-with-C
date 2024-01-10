// WAP to print the sum of the following series of numbers ~
// 7 + 26 + 63 + 124 + ................. till <n> terms
// Every new term in this series can be obtained by adding one to the value of <i> (assuming the loop iterates from 1 to n) and cubing it then subtracting <1> from it.
// Basically, if the loop iterates from (1 --> n) then, <next-term> == [ ((i + 1) ^ 3) - 1 ]

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;

    printf("Enter the no of terms, n:");
    scanf("%d", &n);

    // 'nt' means 'next term' in the series. We have initialised it to first term.
    int nt = 2;

    // To store the summation of every term obtained
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        // Expression to obtain new terms of the series
        nt = (((i + 1) * (i + 1) * (i + 1)) - 1);

        printf("%d + ", nt);
        
        // Assignment Updation is used to retain the sum value from previous iterations
        sum += nt;
    }

    printf("\nThe sum of this series upto %d terms is: %d", n, sum);

    // getch();
}