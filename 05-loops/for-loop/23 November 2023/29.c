// WAP to print the the sum of the following series ~
                // 1 + x^3 + x^8 + x^15 + x^24 + ....... + upto x^n

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
        sum += pow(x, i*(i+2));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
            1 + x^3 + x^8 + x^15 + x^24 + ....... + upto x^n

            0    1     2     3      4

            powers --> 3, 8, 15, 24

        x = 2       n = 3
            + 1 

        i = 1       
                pow(2, (i+2))       for pow(3) >>> 2^3 = 1 + 8 == 9


        i = 2       
                pow(2, (i+2))       for pow(8) >>> 2^8 = 9 + 256 = 265


        i = 3       
                pow(2, (i+2))       for pow(15) >>> 2^15 = 265 + 32768 = 33033


        i = 4       
                pow(2, (i+2))       for pow(24) >>> 2^24 = 33033 + 16777216 == 16810249

*/