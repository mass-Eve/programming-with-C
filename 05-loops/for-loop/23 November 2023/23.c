// WAP to print the the sum of the following series ~
                // 1 + x^1 + x^4 + x^9 + x^16 + x^25 + ....... + upton x^n

#include<stdio.h>
// #include<conio.h>
#include<math.h>

void main()
{
    int i, n, x, sum = 0;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i=0; i <= n; i++)
    {
        sum += pow(x, (i*i));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}