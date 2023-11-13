// WAP to enter two nos and sum them

#include<stdio.h>
#include<conio.h>

void main()
{
    int num1;
    int num2;
    int sum;

    printf("Enter num1 = ");
    scanf("%d", &num1);
    printf("Enter num2 = ");
    scanf("%d", &num2);

    sum = num1 + num2 ;
    printf("The sum of %d & %d is = %d", num1, num2, sum);
}
