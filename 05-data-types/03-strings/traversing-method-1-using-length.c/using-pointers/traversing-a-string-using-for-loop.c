#include<stdio.h>
void main()
{
    char name[] = "John";

    for (int i = 0; i < sizeof(name) - 1; i++)
    {
        printf("%c | ", name[i]);
    }
}