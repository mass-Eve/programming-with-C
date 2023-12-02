// WAP to print the the sum of the following series ~
                // 1 + x^2 + x^4 + x^6 + x^8 + ....... + upton x^n

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

    for (i=1; i <= n; i++)
    {
        sum += pow(x, (i*2));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                    WORKING
    
    Let x == 2 and n == 4

        1 + 2^2 + 2^4 + 2^6 + 2^8

    i == 1;
            sum = 1 + pow(2, 1*2)
            sum = 1 + pow(2, 2)         == 5

    i == 2;
            sum = 5 + pow(2, 2*2)
            sum = 5 + pow(2, 4)         == 21

    i == 3;
            sum = 21 + pow(2, 3*2)
            sum = 21 + pow(2, 6)         == 85

    i == 4;
            sum = 85 + pow(2, 4*2)
            sum = 85 + pow(2, 8)         == 341




*/