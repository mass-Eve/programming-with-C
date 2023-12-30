#include<stdio.h>

int recur(int base, int power)
{
    if (power == 1)
    {
        return base;
    }
    if (power == 0)
    {
        return 1;
    }
    else{
        return (base * recur(base, power - 1)); 
    }
}

void main()
{
    int base;
    int power;

    printf("Enter the number: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);

    printf("base ^ power: %d ^ %d == %d\n", base, power, recur(base, power));
}

/*
    recur(5, 3)
        >>> if p == 1 ; return base;
        >>> else
            >>> 5 * recur(5, 3 - 1)
                >>> 5 * 5 recur(5, 2 - 1)   
                    >>> 5 * 5 recur(5, 1) 
                        >>> 5 * 5 * 5
*/