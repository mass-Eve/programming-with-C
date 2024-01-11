// WAP to input a number and check if it is a automorphic number or not. A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.
// Hint -: 25^2 = 6(25)

#include<stdio.h>
#include<math.h>
// #include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // A copy of the main number
    int nc = num;

    // A variable to store the square of the number
    int num_sq = num * num;

    // A variable to count the number of digits in the number
    int count = 0;

    for (int i = 1; i < nc; nc /= 10)
    {
        count++ ;
    }

    // This variable stores the base of the main number. This value will be used to obtain the last digits from the squared value of the number.
    int base = pow(10, count);
    
    // Checking the condition
    if ((num_sq % base) == num)
    {
        printf("Yes. It is an Automorphic Number.");
    }
    else{
        printf("Alas. It is not an Automorphic Number.");
    }

    // getch();
}