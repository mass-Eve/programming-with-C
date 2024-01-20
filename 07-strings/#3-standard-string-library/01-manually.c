#include<stdio.h>

int slen(char *base_address)
{
    int len = 0;
    while (*base_address != '\0')
    {
        len++;
        base_address++;
    }
    return len;
}

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = 0;
    len = slen(str);

    printf("The length of the string '%s' is : %d", str, len);
}