// WAP to print the following series of numbers ~
// 7, 26, 63, 124, ................. , n

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n, i;

    printf("Enter the no of terms here:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d, ", (((i + 1 ) * (i + 1 ) * (i + 1 )) - 1));
    }

    // getch();
}
