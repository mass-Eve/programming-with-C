// WAP to input a number and check if the sum of its digits is equal to the product of its digits.

#include<stdio.h>
#include<math.h>

void main()
{
    // main_num will store the number input by the user. 
    int main_num;
    printf("Enter the number: ");
    scanf("%d", &main_num);

    int rem = 0, sum = 0, pro = 1;
    for (main_num; main_num > 0; main_num /= 10)
    {
        rem = main_num % 10;
        sum += rem;
        pro *= rem;
    }
    if (sum == pro)
        printf("Yes");
    else
        printf("No");
}