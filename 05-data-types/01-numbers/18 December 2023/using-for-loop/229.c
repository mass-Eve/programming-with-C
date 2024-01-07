#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int nc = num;
    int count = 0;
    
    for (int i = 1; i <= nc; nc/=10)
    {
        count++ ; 
    }
    printf("The number of the digits in %d is %d", num, count);
}
