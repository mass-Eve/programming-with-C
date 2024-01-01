#include<stdio.h>
void main()
{
    char name[] = "John";
    char *np = name;

    do {
        printf("%c", *np);
        *np ++;
    }while (*np != '\0');
}