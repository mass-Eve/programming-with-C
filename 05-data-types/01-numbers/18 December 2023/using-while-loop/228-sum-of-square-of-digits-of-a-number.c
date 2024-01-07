// WAP to input a number and calculate the sum of square of each of it's digits.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num, num_copy;

    printf("Enter a number: ");
    scanf("%d", &num);

    num_copy = num;
    int rem = 0, sum = 0;
    while (num > 0)
    {
        if (num > 10)
        {
            rem = num % 10;
            num = num / 10;
            sum += (rem * rem);
            rem = 0;
        }
        else{
            sum += num * num;
            break;
        }
    }
    printf("The sum of the sqaures of digits of %d is %d", num_copy, sum);
    
    // getch();
}