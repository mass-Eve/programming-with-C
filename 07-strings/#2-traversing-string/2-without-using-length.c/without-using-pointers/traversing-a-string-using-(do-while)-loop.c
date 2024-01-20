#include<stdio.h>
void main()
{
    char name[] = "John";

    int i = 0;
    do {
        printf("%c", name[i]);
        i++;
    } while (name[i] != '\0');
}