// WAP to find the total number of digits in a number.
// if num = 45
//    digits = 2

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // A copy of the main number
    int nc = num;
    
    // The total number of digits will be count and stored in this variable. And it has been provided a garbage value 0.
    int count = 0;
    
    for (int i = 1; i <= nc; nc/=10)
    {
        count++ ; 
    }
    printf("The number of the digits in %d is %d", num, count);

    // getch();
}