// WAP to print the the sum of the following series ~
                // 1 + x^7 + x^26 + x^63 + x^124 + ....... + upto x^n

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
        sum += pow(x, ((i+1)*(i+1)*(i+1) - 1));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                    WORKING

        Let x == 2 and n == 2

    i = 1;
            sum = 1 + pow(2, (1+1)*(1+1)*(1+1) - 1)
            sum = 1 + pow(2, 7) == 129 

    i = 2;
            sum = 129 + pow(2, (2+1)*(2+1)*(2+1) - 1)
            sum = 129 + pow(2, 26) == 67108993

    i = 3;
            sum = 67108993 + pow(2, (3+1)*(3+1)*(3+1) - 1)
            sum = 67108993 + pow(2, 63) == !!


*/
