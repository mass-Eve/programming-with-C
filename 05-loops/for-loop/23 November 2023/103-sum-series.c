// WAP to print the the sum of the following series ~
                // 1 + x^1 + x^4 + x^7 + x^16 + ....... + upto x^n

#include<stdio.h>
// #include<conio.h>
#include<math.h>

void main()
{
    int sum = 1, i, n, x, power;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i=1; i <= n; i++)
    {
        // sum += pow(x, (i*i + 1));

        if (i % 2 == 0){
            power = pow(2, i);
        }
        else{
            power = pow(2, i) - 1;
        }
        sum += pow(x, power);

    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                1 + x^1 + x^4 + x^7 + x^16 + x^31 ....... + upto x^n

                0    1     2     3      4

            if (i % 2 == 0){
                power = pow(2, i)  
            }
            else {
                power = pow(2, i) - 1
            }

            powers --> 1, 4, 7, 16

        i = 1      >>> power = 2^1 - 1 == 1
        i = 2      >>> power = 2^2 - 0 == 4
        i = 3      >>> power = 2^3 - 1 == 7
        i = 4      >>> power = 2^4 - 0 == 16

        x = 2       n = 3
            + 1 

        i = 1;
                n = 1 ; sum = 1 + 2^1 = 3
        i = 2;
                n = 4 ; sum = 3 + 2^4 = 3 + 16 = 19
        i = 3;
                n = 7 ; sum = 19 + 2^7 = 19 + 128 = 147

*/
