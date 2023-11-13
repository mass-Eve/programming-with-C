#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int num1, num2, sq;

    printf("Enter num1 = ");
    scanf("%d", &num1);
    
    printf("Enter num2 = ");
    scanf("%d", &num2);
    
    sq = sqrt(num1 + num2);
    printf("The square root value of %d and %d is %d", num1, num2, sq);
}