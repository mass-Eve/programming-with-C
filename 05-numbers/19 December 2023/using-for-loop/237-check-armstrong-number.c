// WAP to input a number and check if it is an Armstrong number or not.
// A number is called so if the number is equal to (the sum of its individual digits) raised to the power of (total no. of digits in that number).

#include<stdio.h>
#include<math.h>

void main()
{
    // main_num will store the number input by the user. 
    int main_num;
    printf("Enter the number: ");
    scanf("%d", &main_num);


    // num_copy will be used to calculate the sum of individual digits of the number.
    // num_copy2 will be used to check if the sum calculated is equal to the main number (or num_copy2)
    int num_copy, num_copy2;
    num_copy = main_num;
    num_copy2 = main_num;


    // calculate the number of digits in the main_num
    int n_digits = 0;
    for (main_num; main_num > 0; main_num /= 10)
    {
        n_digits += 1;
    }

    // Calculating Armstrong Number
    float sum = 0, rem = 0;
    for (num_copy; num_copy > 0; num_copy /= 10)
    {
        rem = num_copy % 10;
        sum += pow(rem, n_digits);
    }


    // Checking condition for Armstrong Number
    if (sum == num_copy2)
        printf("The number is an Armstrong Number.");
    else
        printf("The number is not an Armstrong Number.");
}