// WAP to input a number and reverse it.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int reversed_num = 0, base = 10;
    int rem = 0;

    // Calculation Part
    while (num > 0)
    {
        rem = num % 10;
        reversed_num = (reversed_num * base) + rem;
        num /= 10; // loop iterator
    }
    printf("The reversed form of %d is %d", num, reversed_num);
}