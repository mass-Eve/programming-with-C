#include<stdio.h>
void main()
{
    char name[] = "John";
    char *np = name;

    int k = 0;
    do {
        printf("%c | ", *np);
        k++;
        *np ++;
    } while (k < sizeof(name)-1);

}