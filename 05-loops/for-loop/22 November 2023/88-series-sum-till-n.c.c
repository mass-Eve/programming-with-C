// 1, 4, 7, 10, ................... , n

#include <stdio.h>
// #include<conio.h>

void main()
{
    int i, n, a, nt, sum = 0;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // aN = a + (n-1)*d
        a = 1;
        nt = a + (i - 1) * 3;
        printf("%d, ", nt);
        // sum += nt;

        if (i % 2 == 0)
        {
            sum -= nt;
        }
        else
        {
            sum += nt;
        }
    }
    printf("The sum of this series upto n terms is: %d", sum);

    // getch();
}
