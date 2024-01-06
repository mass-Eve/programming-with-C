// WAP to print the the sum of the following series ~
                // 1 + x^2 + x^3 + x^4 + ....... + upton x^n

#include<stdio.h>
// #include<conio.h>
#include<math.h>

void main()
{
    int sum = 1, i, n, x;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        sum += pow(x, i+1);
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                    WORKING
    
    Let x == 2 and n == 4

            1 + 2^2 + 2^3 + 2^4 + 2^5

            sum = 1 + pow(x, i+1)

    i = 1;
            sum = 1 + pow(2, 1+1)
            sum = 1 + pow(2, 2)         == 5

    i = 2;
            sum = 5 + pow(2, 2+1)
            sum = 5 + pow(2, 3)         == 13

    i = 3;
            sum = 13 + pow(2, 3+1)
            sum = 13 + pow(2, 4)         == 29

    i = 4;
            sum = 29 + pow(2, 4+1)
            sum = 29 + pow(2, 5)         == 61


*/