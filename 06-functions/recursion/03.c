#include<stdio.h>
#include<math.h>

int num_rev(int num, int nd)
{
    if (nd == 1)
        return num;
    else{
        int base = pow(10, nd - 1);
        int first_digit = num % 10;
        int rest_of_digits_reversed = num_rev(num / 10, nd - 1);
        return (first_digit * base) + rest_of_digits_reversed;
    }
}

void main()
{
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int num_copy = num, nd = 0;

    while (num_copy != 0)
    {
        num_copy /= 10;
        nd += 1;
    }

    int res;
    res = num_rev(num, nd);
    printf("rev_num: %d", res);
}