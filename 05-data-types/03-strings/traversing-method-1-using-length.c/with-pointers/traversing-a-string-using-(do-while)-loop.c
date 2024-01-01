#include<stdio.h>
void main()
{
    char name[] = "John";

    int k = 0;
    do {
        printf("%c | ", name[k]);
        k++;
    } while (k < sizeof(name)-1);

}