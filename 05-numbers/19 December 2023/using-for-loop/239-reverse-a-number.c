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
    for (num; num > 0; num /= 10)
    {
        rem = num % 10;
        reversed_num = (reversed_num * base) + rem;
    }
    printf("The reversed form of %d is %d", num, reversed_num);
}