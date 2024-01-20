// reverse a number recursively.

#include<stdio.h>

int rev_num = 0;

int recur(int num)
{
    int base = 10;

    if (num < 10)
        rev_num = rev_num * base + num;
    
    else{
        int rem;
        rem = num % 10;
        rev_num = rev_num * base + rem;
        num /= 10;
        recur(num);
    }
    
    return rev_num;
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int cn = num;
    int len = 0;

    while (cn != 0)
    {
        len++;
        cn /= 10;
    }

    rev_num = recur(num);

    printf("entered number: %d\n", num);
    printf("reverse number: %d\n", rev_num);
}

/*
    num = 1289
    rev = 9821

    9*1000 + 8*100 + 2*10 + 1*1
*/