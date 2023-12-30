// WAP to input a number and print it's individual digits.
// using recursion

#include<stdio.h>

int digits(int a)
{
    int rem;

    if (a < 10)
    {
        printf("%d, ", a);
    }

    else{
        rem = a % 10;
        printf("%d, ", rem);
        a /= 10;
        return digits(a); 
    }
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    digits(num);
}

/*
        digits(154)
            >>> 4 , digits(15)
                >>> 4 , 5 , digits(1)
                    >>> 4 , 5 , 1
*/