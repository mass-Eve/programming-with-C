// WAP to print the sum of the following series of numbers ~
    // 2, 5, 10, 17, ................. , n

#include<stdio.h>
// #include<conio.h>

void main ()
{
    int i, n, pt, sum = 0;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);
    
    pt = 2;

    for (i = 1; i <= n; ++i)
    {
        sum += pt;
        printf("%d, ", pt);

        pt += 2*i + 1 ;
    }

    printf("The sum of this series upto n terms is: %d", sum);

    // getch();
} 