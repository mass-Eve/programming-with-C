                // 0, 1, 1, 2, 3, 5, 8, 13, 21
                
#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, pt, sum = 0;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    int a1 = -1, a2 = 1;

    for (i=1; i <= n; i++)
    {
        pt = a1 + a2;
        // printf("%d, ", pt);

        if (i % 2 == 0){
            sum -= pt;
        }
        else{
            sum += pt;
        }

        a1 = a2;
        a2 = pt;
    }

    printf("The sume of this fibonacci series is: %d", sum);

    // getch();
}
