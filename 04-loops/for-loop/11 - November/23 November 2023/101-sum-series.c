// WAP to print the the sum of the following series ~
                // 1 + x^1 + x^4 + x^9 + x^16 + x^25 + ....... + upton x^n

#include<stdio.h>
// #include<conio.h>
#include<math.h>

void main()
{
    int i, n, x, sum = 1;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i=1; i <= n; i++)
    {
        sum += pow(x, (i*i));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                            WORKING
    
        let x == 2 and n == 3

            1 + 2^1 + 2^4 + 2^9 + 2^16

        i == 1;
                sum = 1 + pow(2, 1*1)
                sum = 1 + pow(2, 1)         == 3

        i == 2;
                sum = 3 + pow(2, 2*2)
                sum = 3 + pow(2, 4)         == 19

        i == 3;
                sum = 19 + pow(2, 3*3)
                sum = 19 + pow(2, 9)         == 531




*/