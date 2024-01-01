#include <stdio.h>
void main()
{
    char name[] = "John";
    char *np = name;

    int i = 0;
    for (;;)
    {
        if (name[i] != '\0')
        {
            printf("%c | ", name[i]);
            i++;
        }
        else{
            break;
        }
    }
}