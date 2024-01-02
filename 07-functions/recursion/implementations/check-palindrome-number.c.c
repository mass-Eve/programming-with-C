// palindrome number check recursively.

#include<stdio.h>
// #include<math.h>

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

    if (num == rev_num)
        printf("Yes Palindrome.");
    else
        printf("Not Palindrome.");
}

/*
    num = 1289
    rev = 9821

    9*1000 + 8*100 + 2*10 + 1*1
*/