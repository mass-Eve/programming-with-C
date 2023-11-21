// WAP to print the following series of numbers ~
    // 7, 26, 63, 124, ................. , n


#include<stdio.h>
// #include<conio.h>

void main ()
{
    int n, i;

    printf("Enter the no of terms here:");
    scanf("%d", &n);

    for (i=2; i <= n; i++)
    {
        printf("%d, ", ((i*i*i)-1));
    }

    // getch();
} 