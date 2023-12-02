// WAP to print the sum of the following series of numbers ~
// 1/2 , 3/4 , 5/6 , .......... , n

#include <stdio.h>
// #include<conio.h>

void main()
{
    int i, n, sum = 0;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("[ %d upon %d || ]", i, i + 1);
        sum += (i / (i + 1));
    }

    printf("\n The sum of this series upto n terms is: %d", sum);

    // getch();
}
