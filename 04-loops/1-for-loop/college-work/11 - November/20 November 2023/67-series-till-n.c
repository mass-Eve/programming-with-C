// WAP to print the following series of numbers ~
// 2, 5, 10, 17, ................. , n

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the total no. of terms here:");
    scanf("%d", &n);

    // 'pt' stands for 'print term'. It is the first term in the series and we have initialised it to zero.
    int pt = 2;

    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", pt);

        pt += 2 * i + 1;
    }

    // getch();
}

/*
    n(term) = 5

| Series Term | Value Of <i> | Value Of <print-term> | Updation & New Value Of <print-term> | 
|      1      |      1       |          2            |  pt = 2 + (2*1) + 1 >>> 5            |
|      2      |      2       |          5            |  pt = 5 + (2*2) + 1 >>> 10           |
|      3      |      3       |          10           |  pt = 10 + (2*3) + 1 >>> 17          |
|      4      |      4       |          17           |  pt = 17 + (2*4) + 1 >>> 26          |
|      5      |      5       |          26           |  pt = 26 + (2*5) + 1 >>> 37          |

*/