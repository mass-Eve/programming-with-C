// WAP to input a number from the user and find the sum of the individual digits in that number.
// Example - if num = 456, then <sum> = 4 + 5 + 6 = 15 

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Making a copy of the number
    int nc = num;

    // Variable to store the sum of the digits
    int sum = 0;
    
    for (int i = 1; i <= nc; (nc /= 10))
    {
        // Expression to get the individual digits from the number one-by-one from the end
        int rem = nc % 10;

        // Assignment Addition is done in order to retain the value in sum vaeriable from the previous iterations
        sum += rem;
    }
    printf("The sum of the individual digits of %d = %d", num, sum);

    // getch();
}