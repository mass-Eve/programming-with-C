#include<stdio.h>
void main()
{
    char name[] = "John";
    char *np = name;

    while (*np != '\0')
    {
        printf("%c | ", *np);
        *np ++;
    }
}