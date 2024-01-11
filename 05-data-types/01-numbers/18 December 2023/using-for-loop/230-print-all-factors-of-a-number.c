// WAP to input a number and print all of its factors.
// A number will be a factor of the main number iff it divides the main number completely and leaves no remainder (or zero remainder)

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is a factor of %d\n", i, num);
        }
    }

    // getch();
}