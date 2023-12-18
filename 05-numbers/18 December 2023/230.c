// WAP to input a number and print all of its factors.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= (num/2); i++)
    {
        if (num % i == 0)
        {
            printf("%d is a factor of %d\n", i, num);
        }
    }
    printf("%d is a factor of %d", num, num);

    // getch();
}