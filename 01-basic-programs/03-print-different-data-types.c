// WAP to input two integer, one decimal, and one character value and print the value with a suitable message.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int a ;
    int b ;
    float cc ;
    char dd ;

    printf("Enter the value of a = ");
    scanf("%d", &a);

    printf("Enter the value of b = ");
    scanf("%d", &b);

    printf("Enter the value of c = ");
    scanf("%f", &cc);

    printf("Enter the value of d = ");
    scanf(" %c", &dd);

    printf("The value of a = %d, \n", a);
    printf("The value of b = %d, \n", b);
    printf("The value of c = %f, \n", cc);
    printf("The value of d = %c \n", dd);
    
}   