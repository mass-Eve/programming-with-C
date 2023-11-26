// WAP to print the following series of numbers ~
    // 1/2 , 1/3 , 1/4, 1/5 , .......... , n

#include<stdio.h>
// #include<conio.h>

void main ()
{
    int i, n;

    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        printf("[ 1 upon %d || ]", i+1);
    }

    // getch();
} 
