// WAP to print the following series of numbers ~
// 1/2 , 2/3 , 3/4 ,........, n

#include <stdio.h>
// #include<conio.h>

void main()
{
    int i, n;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("[ %d upon %d || ]", i, i + 1);
    }

    // getch();
}
