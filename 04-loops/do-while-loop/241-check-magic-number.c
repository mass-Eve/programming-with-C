// A number is said to be a magic number, if the sum of its digits are calculated till a single digit recursively by adding the sum of the digits after every addition. If the single digit comes out to be 1,then the number is a magic number. 

#include<stdio.h>
#include<math.h>

void main()
{
    // main_num will store the number input by the user. 
    int main_num;
    printf("Enter the number: ");
    scanf("%d", &main_num);

    int copy1 = main_num;

    int rem = 0;
    int sum;
    do
    {
        sum = 0;
        while (copy1 != 0)
        {
            rem = copy1 % 10;
            sum += rem;
            copy1 /= 10;
        }
        copy1 = sum;
    } while (sum > 9);

    if (sum == 1)
        printf("Yes");
    else
        printf("No");
}