// A number is said to be a magic number, if the sum of its digits are calculated till a single digit recursively by adding the sum of the digits after every addition. If the single digit comes out to be 1,then the number is a magic number. 

#include<stdio.h>
#include<math.h>

void main()
{
    // main_num will store the number input by the user. 
    int main_num;
    printf("Enter the number: ");
    scanf("%d", &main_num);

    int n_digits = 0;
    int main_num_copy1 = main_num;
    int sum = 0;
    while (n_digits != 1)
    {
        // 1st addition of individual digits
        int rem = 0;
        for (main_num; main_num > 0; main_num /= 10)
        {
            rem = main_num % 10;
            sum += rem;
        }
        int sum_copy = sum;

        // no of digits in the sum variable number.
        for (sum; sum > 0; sum /= 10)
        {
            n_digits += 1; 
        }
        main_num = sum_copy; 
    }

    // Check if the digit is 1.
    if (main_num == 1)
        printf("Yes. It is magic number.");
    else
        printf("No. It is not a magic number!");
}