// WAP to input a number and print the sum of all of its factors.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = num;
    for (int i = 1; i <= (num/2); i++)
    {
        if (num % i == 0)
        {
            // printf("%d is a factor of %d\n", i, num);
            sum += i;
        }
    }
    printf("The sum of all the factors of %d is %d", num, sum);

    // getch();
}