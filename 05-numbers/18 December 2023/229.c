// WAP to input a number and calculate the num of digits in the number.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num, num_copy;

    printf("Enter a number: ");
    scanf("%d", &num);

    num_copy = num;
    int rem = 0, digit_count = 0;
    while (num > 0)
    {
        if (num > 10)
        {
            rem = num % 10;
            num = num / 10;
            digit_count += 1;
            rem = 0;
        }
        else{
            digit_count += 1;
            break;
        }
    }
    printf("The number of digits in %d is %d", num_copy, digit_count);

    // getch();
}