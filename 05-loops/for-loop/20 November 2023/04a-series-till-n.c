// WAP to print the following series of numbers ~
    // 1, 4, 7, 10, ................... , n
    // Clearly, it is an AP

#include<stdio.h>
// #include<conio.h>

void main ()
{
    int i, n, a, nt;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        // aN = a + (n-1)*d
        a = 1;
        nt = a + (i-1)*3 ;
        printf("%d, ", nt);
    }

    // getch();
} 