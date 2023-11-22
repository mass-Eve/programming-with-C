                        // 1, 2, 3, 4, 5, ......., n

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, sum = 0;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        if (i % 2 == 0){
            sum -= i;
        } 
        else{
            sum += i;
        }
    }
    printf("Sum of first %d natural numbers is: %d", n, sum);

    // getch();
}