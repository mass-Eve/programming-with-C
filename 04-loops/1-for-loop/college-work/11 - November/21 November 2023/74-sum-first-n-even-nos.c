// WAP to print the sum of first n-even numbers.
//  2 + 4 + 6 + 8 + ........ till <n> terms

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the number of terms to be counted in the sum, n:");
    scanf("%d", &n);

    // A sum variable to store the sum of all natural numbers
    int sum = 0;
    
    for (int i = 1; i <= n; i++)
    {
        printf("%d + ", (i*2));

        // (i*2) will give us even numbers from (i = 1) to (i = n)
        sum += (i*2);
    }
    printf("\nThe Sum of the first %d even nos. is: %d", n, sum);

    // getch();
}