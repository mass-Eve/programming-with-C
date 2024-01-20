#include <stdio.h>
void main()
{
    char name[] = "John";
    char *np = name;

    for (;;)
    {
        if (*np != '\0')
        {
            printf("%c | ", *np);
            *np ++;
        }
        else{
            break;
        }
    }
}