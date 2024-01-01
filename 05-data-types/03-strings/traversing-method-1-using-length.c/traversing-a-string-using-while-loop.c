#include<stdio.h>
void main()
{
    char name[] = "John";

    int j = 0;
    while (j < sizeof(name)-1)
    {
        printf("%c | ", name[j]);
        j++;
    }
}