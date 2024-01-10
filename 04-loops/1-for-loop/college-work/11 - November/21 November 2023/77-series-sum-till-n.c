// WAP to print the sum of the following series of numbers ~
// 2 + 5 + 10 + 17 + ................. till <n> terms
// Every new term in this series can be obtained by multiplying the previous term by <2> and adding <1> to it.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    // 'nt' means 'next term' in the series. We have initialised it to first term.
    int nt = 2;

    // To store the summation of every term obtained
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        // Assignment Updation is used to retain the sum value from previous iterations
        sum += nt;

        printf("%d + ", nt);

        // Expression to obtain every next term in the series. And Assignment updation is used to maintain the condition as the condition relies on the previous value of <nt> to obtain the upcoming value of <nt> by adding one to the twice of previous value of <nt>
        nt += 2 * i + 1;
    }

    printf("\nThe sum of this series upto %d terms is: %d", n, sum);

    // getch();
}