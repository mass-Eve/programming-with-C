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
    while (main_num > 0)
    {
        rem = main_num % 10;
        sum += rem;
        main_num /= 10;
    }

    if (main_num_copy % sum == 0)
        printf("Yes");
    else
        printf("No");
}