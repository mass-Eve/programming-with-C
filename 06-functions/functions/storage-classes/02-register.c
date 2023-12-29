#include<stdio.h>
void main()
{
    {
        register int a = 6;
        {
            register int a = 5;
            {
                register int a = 4;
                printf("%d\n", a);
            }
            printf("%d\n", a);
        }
        printf("%d\n", a);
    }
}