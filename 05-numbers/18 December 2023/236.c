// A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num, num_sq = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    num_sq = num * num;

    if ((num_sq % 100) == num)
    {
        printf("Yes. It is an Automorphic Number.");
    }
    else{
        printf("Alas. It is not an Automorphic Number.");
    }
}