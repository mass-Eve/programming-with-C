#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int nc = num;
    int sum = 0;
    
    for (int i = 1; i <= nc; nc/=10)
    {
        int rem = nc % 10;
        sum += rem;
    }
    printf("The sum of the individual digits of %d = %d", num, sum);
}
