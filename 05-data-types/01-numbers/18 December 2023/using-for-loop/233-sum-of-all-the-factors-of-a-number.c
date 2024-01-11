// WAP to input a number and print the sum of all of its factors.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // A variable to store the sum of the factors of the number. It is initialised as the number itself because it is also a factor of the number 
    int sum = num;
    for (int i = 1; i <= (num/2); i++)
    {
        if (num % i == 0)
        {
            printf("%d is a factor of %d\n", i, num);
            sum += i;
        }
    }
    printf("%d is a factor of %d\n", num, num);
    printf("The sum of all the factors of %d is %d", num, sum);

    // getch();
}