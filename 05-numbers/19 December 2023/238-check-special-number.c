// A number is called special number if the sum of facotrial of its individual digits is equal to the number itself.

#include<stdio.h>
// #include<conio.h>

void main()
{
    // main_num will store the number input by the user. 
    int main_num;
    printf("Enter the number: ");
    scanf("%d", &main_num);

    // As the operation in while loop will go on, the main_num should not get affected (as we will require it in the end of the program to make a comparision), that's why a copy of it is created and all the operation will be done on that variable.
    int num_copy1 = main_num;
    int rem = 0, sum = 0;

    // Calculation Part
    while (num_copy1 > 0)
    {
        // variable to calculate the factorial is created inside the while loop to avoid mis-calculations as the number of times this loop will run, it will created freeshly, thus leaving no traces of past values
        int fac = 1;
        rem = num_copy1 % 10;
        // this loop will calculate the the factorial of the number.
        for (int i = 1; i <= rem; i++)
        {
            fac *= i;
        }
        sum += fac;
        num_copy1 /= 10;
    }

    // Checking conditions for special number.
    if (main_num == sum)
        printf("The number is a special number.");
    else
    printf("The number is not a special number!!");


    // getch();
}