// WAP to input a number and reverse it.

#include<stdio.h>
// #include<conio.h>

void main()
{
    // main_num will store the number input by the user. 
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int num_copy = num;
    int reversed_num = 0, base = 10;
    int rem = 0;

    // Calculation Part
    while (num_copy > 0)
    {
        rem = num_copy % 10;
        reversed_num = (reversed_num * base) + rem;
        num_copy /= 10; // loop iterator
    }

    // Checking conditions for special number.
    if (num == reversed_num)
        printf("The number is a palindrome number.");
    else
    printf("The number is not a palindrome number!!");
}