// WAP to print the following series of numbers ~
    // 1/2 , 1/3 , 1/4, 1/5 , .......... , n

#include<stdio.h>
// #include<conio.h>

void main ()
{
    int i, n;
    float sum = 0;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        printf("[ 1 upon %d || ]", i+1);
        // sum += (1.0/(i+1));

        if (i % 2 == 0){
            sum -= 1.0/(i+1);
        }
        else{
            sum += 1.0/(i+1);
        }

    }

    printf("The sum of this series upto n terms is: %f", sum);

    // getch();
} 