// WAP to print the first n natural numbers.

#include<stdio.h>
// #include<conio.h>

void main ()
{
    int i, n;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        printf("%d, ", i);
    }

    // getch();
}