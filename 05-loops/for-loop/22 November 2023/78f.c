                // 1/2 , 2/3 , 3/4 ,........, n

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
        printf("[ %d upon %d || ]", i, i+1);
        
        if (i % 2 == 0){
            sum -= (i / (i+1.0));
        }
        else{
            sum += (i / (i+1.0));
        }
    }

    printf("The sum of this series upto n terms is: %f", sum);

    // getch();
} 
