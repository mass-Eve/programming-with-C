#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Entre a number: ");
    scanf("%d", &num);

    if (num/10==0){
        printf("\nYes");
    }
    else{
        printf("\nNo");
    }
}