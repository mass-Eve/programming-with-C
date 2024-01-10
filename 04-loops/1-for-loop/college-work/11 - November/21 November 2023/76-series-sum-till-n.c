// WAP to print the sum of the following series of numbers ~
// 1 + 4 + 7 + 10 + ................... till <n> terms
// Clearly it is an Arithmetic Progression, so we can use the formula of AP to get next term in the series from every value of i and then sum it to a variable.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    // As per the A.P, we have initialised the first term (a) == 1
    int a = 1;

    // 'nt' means 'next term' in the series
    int nt;

    // To store the summation of every term obtained
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        // (next term) aN = a + (n-1)*d
        nt = a + (i - 1) * 3;

        printf("%d + ", nt);

        // Assignment Updation is used to retain the sum value from previous iterations
        sum += nt;
    }
    printf("\nThe sum of this series upto %d terms is: %d", n, sum);

    // getch();
}