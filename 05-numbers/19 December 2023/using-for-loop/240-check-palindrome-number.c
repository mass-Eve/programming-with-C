// WAP to input a number and check if it is a palindrome number or not.

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
    for (num_copy; num_copy > 0; num_copy /= 10)
    {
        rem = num_copy % 10;
        reversed_num = (reversed_num * base) + rem;
    }

    // Checking conditions for special number.
    if (num == reversed_num)
        printf("The number is a palindrome number.");
    else
    printf("The number is not a palindrome number!!");
}