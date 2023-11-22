// WAP to print the tribonaci sequence for a specified value of n.
        // 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, ......., n

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, pt, sum = 0;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    int a1 = 0, a2 = -1, a3 = 1;

    for (i=1; i <= n; i++)
    {
        pt = a1 + a2 + a3;

        if (i % 2 == 0){
            sum -= pt;
        }
        else{
            sum += pt;
        }

        // printf("%d, ", pt);
        a1 = a2;
        a2 = a3;
        a3 = pt;
    }

    printf("The sume of this tribonacci series is: %d", sum);

    // getch();
}