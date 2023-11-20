// WAP to print the following series of numbers ~
    // 2, 5, 10, 17, ................. , n

#include<stdio.h>
// #include<conio.h>

void main ()
{
    int i, n, pt;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);
    
    pt = 2;

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", pt);

        pt += 2*i + 1 ;
    }

    // getch();
} 