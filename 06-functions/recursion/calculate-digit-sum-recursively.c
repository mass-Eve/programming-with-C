// sum recursively

#include<stdio.h>

int recur(int num, int sum)
{
    if (num < 10)
    {
        return (sum += num);
    }
    else{
        int rem;
        rem = num % 10;
        sum += rem;
        num /= 10;
        return recur(num, sum);
    }
}

void main()
{
    int num = 1256;
    int sum = 0;

    printf("sum of %d's individual digits is: %d\n", num, recur(num, sum));
}