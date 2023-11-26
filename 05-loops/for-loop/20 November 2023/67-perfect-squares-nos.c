#include<stdio.h>
// #include<conio.h>

void main ()
{
    int n, i;

    printf("Enter the no. of terms here:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        printf("%d, ", i*i);
    }

    // getch();
}
