// WAP to print the following series of numbers ~
// 1, 4, 7, 10, ................... , n
// Clearly, it is an AP with first term (a) = 1 and common difference (d) = 3

#include <stdio.h>
// #include<conio.h>

void main()
{
    // n is  the total number of terms in the series
    int n; 

    // 'a' is the first element of the series
    int a = 1;

    // nt stands for 'next term in the series'. Initialised it zero in order to prevent it from taking any garbage value.
    int nt = 0;

    printf("Enter the total no. of terms here, n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // aN = a + (n-1)*d
        nt = a + (i - 1) * 3;

        printf("%d, ", nt);
    }

    // getch();
}