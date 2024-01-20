#include<stdio.h>
void main()
{
    char name[] = "John";
    char *np = name;

    for (int i = 0; i < sizeof(name) - 1; i++)
    {
        printf("%c | ", *np);
        *np ++;
    }
}