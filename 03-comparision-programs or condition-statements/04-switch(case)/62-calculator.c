// Write a menu-driven program to input two numbers and imitate the working of a calculator

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2;
    char choice ;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Enter choice: ");
    scanf(" %c", &choice);
    switch (choice)
    {
        case '+':
            printf("%d + %d is %d", num1, num2, num1+num2);
            break;
        case '-':
            printf("%d - %d is %d", num1, num2, num1-num2);
            break;
        case '/':
            printf("%d / %d is %d", num1, num2, num1/num2);
            break;
        case '*':
            printf("%d X %d is %d", num1, num2, num1*num2);
            break;
        case '%':
            printf("Remainder obtained when %d is divided by %d is %d", num1, num2, (num1 % num2));
            break;
        default :
            printf("Check your input!");
    }
}
