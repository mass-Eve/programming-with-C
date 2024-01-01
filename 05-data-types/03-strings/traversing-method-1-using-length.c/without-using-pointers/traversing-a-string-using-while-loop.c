#include<stdio.h>
void main()
{
    char name[] = "John";
    char *np = name;

    int j = 0;
    while (j < sizeof(name)-1)
    {
        printf("%c | ", *np);
        j++;
        *np ++;
    }
}