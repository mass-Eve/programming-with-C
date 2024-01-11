// WAP to input a number and print the total no. of factors the number.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // A variable storing the total number of factors of the number. It is initialised as 1 because the number is itself a factor it.
    int count = 1;
    for (int i = 1; i <= (num/2); i++)
    {
        if (num % i == 0)
        {
            printf("%d is a factor of %d\n", i, num);
            count += 1;
        }            
    }
    printf("%d is a factor of %d\n", num, num);
    printf("The total no. of factors of %d are %d", num, count);

    // getch();
}