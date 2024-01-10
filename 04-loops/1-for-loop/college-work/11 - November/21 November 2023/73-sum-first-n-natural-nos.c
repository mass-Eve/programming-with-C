// WAP to print the sum of first n-natural nos.
// 1 + 2 + 3 + 4 + ......... till <n> terms 

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the number of terms to be counted in the sum, n:");
    scanf("%d", &n);

    // A sum variable to store the sum of all natural numbers
    int sum = 0;
    
    for (int i = 1; i <= n; i++)
    {
        printf("%d + ", i);        

        // Assignment Updation is used to retain the previous value obtained in the summation process
        sum += i;
    }
    printf("\nThe Sum of the first %d natural numbers is: %d", n, sum);

    // getch();
}