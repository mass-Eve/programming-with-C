// A number is called happy if it leads to 1 after a sequence of steps wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1. 

// An integer number in base 10 which is divisible by the sum of its digits is said to be a Harshad Number. An n-Harshad number is an integer number divisible by the sum of its digit in base n.
// Also known as Niven number.

#include<stdio.h>
#include<math.h>

void main()
{
    // main_num will store the number input by the user. 
    int main_num;
    printf("Enter the number: ");
    scanf("%d", &main_num);
    int main_num_copy = main_num;
    int sum = 0, rem = 0;
    while (main_num != 0)
    {
        rem = main_num % 10;
        sum += pow(rem, 2);
        main_num /= 10;

        sum = main_num;

        if (sum == 1)
            break;
    }

    if (sum == 1)
        printf("Yes");
    else
        printf("No");
}