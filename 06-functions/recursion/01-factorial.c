#include<stdio.h>

int factorial(int number)
{
    int fac;
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        fac = (number * factorial(number - 1));
        printf("%d\n", fac);
    }
    return fac;
}

void main ()
{
    int num;
    printf("Enter the number whose factorial you want to calculate: ");
    scanf("%d", &num);

    printf("The factorial of the number, calculated recursively and shown prograssively :\n");

    int facto;
    facto = factorial(num);
    printf("The factorial of %d is %d: ", num, facto);
}

/*
    factorial(5)
        >>> 5 * factorial(5-1)
            >>> 5 * 4 * factorial(4-1)
                >>> 5 * 4 * 3 * factorial(3-1)
                    >>> 5 * 4 * 3 * 2 * factorial(2-1)
                        >>> 5 * 4 * 3 * 2 * 1
                            >>> 120
*/