// WAP to input a number and check if it is a automorphic number or not. A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.
// Hint -: 25 ^2 = 6(25)

#include<stdio.h>
// #include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int nc = num;
    int num_sq = num * num;
    int count = 0;

    for (int i = 1; i < nc; nc /= 10)
    {
        count++ ;
    }
    int base = pow(10, count);
    
    if ((num_sq % base) == num)
    {
        printf("Yes. It is an Automorphic Number.");
    }
    else{
        printf("Alas. It is not an Automorphic Number.");
    }

    // getch();
}
