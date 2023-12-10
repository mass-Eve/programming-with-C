// Write a program in C to read 10 numbers from the keyboard and find their sum and average.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, num, sum = 0, avg = 0;

    for (i=1; i <= 10; i++)
    {
        printf("Enter number:");
        scanf("%d", &num);

        sum += num;
    }
    avg = sum / 10;
    printf("The Sum is: %d", sum);
    printf("The Average is: %d", avg);
    // getch();
}