// Write a program to input three integers and print them in descending order

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2, num3;
    printf("Entre number1: ");
    scanf("%d", &num1);

    printf("Entre number2: ");
    scanf("%d", &num2);

    printf("Entre number3: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        if (num2 > num3)
        {
            printf("%d \n%d \n%d", num1, num2, num3);
        }
        else{
            printf("%d \n%d \n%d", num1, num3, num2);
        }
    }

    else if (num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
        {
            printf("%d \n%d \n%d", num2, num1, num3);
        }
        else{
            printf("%d \n%d \n%d", num2, num3, num1);
        }
    }

    else if (num3 > num1 && num3 > num2)
    {
        if (num1 > num2)
        {
            printf("%d \n%d \n%d", num3, num1, num2);
        }
        else{
            printf("%d \n%d \n%d", num3, num2, num1);
        }
    }

    else{
        printf("All numbers are equal!");
    }
}