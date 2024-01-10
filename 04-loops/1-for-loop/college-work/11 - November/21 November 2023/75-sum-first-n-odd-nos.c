// WAP to print the sum of first n-odd numbers.
// 1 + 3 + 5 + 7 + ........... till <n> terms

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the number of terms to be counted in the sum, n:");
    scanf("%d", &n);

    // A sum variable to store the sum of all natural numbers
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d + ", (i * 2 + 1));

        // (i*2 + 1) will give odd numbers from (i = 1) to (i = n)
        sum += (i*2 + 1);
    }
    printf("\nThe Sum of the first %d odd nos. is: %d", n, sum);

    // getch();
}