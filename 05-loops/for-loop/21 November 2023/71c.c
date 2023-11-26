// WAP to print the sum of the following series of numbers ~
    // 7, 26, 63, 124, ................. , n


#include<stdio.h>
// #include<conio.h>

void main ()
{
    int n, i, pt, sum = 0;

    printf("Enter the no of terms here:");
    scanf("%d", &n);

    for (i=2; i <= n; i++)
    {
        pt = ((i*i*i)-1);
        printf("%d, ", pt);
        sum += pt;
    }

    printf("The sum of this series upto n terms is: %d", sum);

    // getch();
} 
