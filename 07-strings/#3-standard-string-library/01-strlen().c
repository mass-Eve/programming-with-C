#include<stdio.h>
#include<string.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    // We are passing the base address of string, not the string itself!
    int len = strlen(str1);
    printf("length of 'John' is : %d\n", len);
}