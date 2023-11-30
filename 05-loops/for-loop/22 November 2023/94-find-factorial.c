// WAP to calculate and print the factorial of a number.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, fac=1;
    printf("Enter the no whose factorial is to be found, n:");
    scanf("%d", &n);

    for (i=1; i <=n; i++)
    {
        fac *= i;
    }
    printf("The factorial of %d is %d", n, fac);

    // getch();
}
