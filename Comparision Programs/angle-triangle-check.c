// Write a program to input the measures of the 3 angles of triangle and check if triangle formation is possible or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int a1, a2, a3;
    printf("Entre angle1: ");
    scanf("%d", &a1);

    printf("Entre angle2: ");
    scanf("%d", &a2);

    printf("Entre angle3: ");
    scanf("%d", &a3);

    if ( ( (a1 > 0) && (a2 > 0) && (a3 > 0) ) && ( (a1+a2+a3)==180 ) )
    {
        printf("Triangle formation is possible!");
    }
    else{
        printf("Triangle formation not possible!");
    }
}