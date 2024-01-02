// WAP to subtract two number using there pointers

#include<stdio.h>
void main()
{
    int a = 12, *x;
    x = &a;
    int b = 6.8, *y;
    y = &b;
    int c = a - b;

    printf("Normally!!\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c = a - b: %d\n", c);

    int sub = *x - *y;
    printf("Using Pointers!!\n");
    printf("a: %d\n", *x);
    printf("b: %d\n", *y);
    printf("c = a - b: %d\n", sub);
}