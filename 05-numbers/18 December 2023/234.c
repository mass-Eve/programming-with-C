// WAP to input a number and check if it is a perfect number or not. A perfect number is a number whose factor's sum excluding the number itself is equal to the number. 
// For example ~ 6 => 1+2+3 ||  

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num, sum_check = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= (num/2); i++)
    {
        if (num % i == 0)
        {
            sum_check += i;
        }
    }
    if (sum_check == num)
    {
        printf("The number %d is a perfect number.", num);
    }
    else{
        printf("The number %d is not a perfect number!!", num);
    }
}