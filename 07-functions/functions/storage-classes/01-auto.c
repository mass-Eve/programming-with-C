#include<stdio.h>
void main()
{
    {
        auto int a = 6;
        {
            auto int a = 5;
            {
                auto int a = 4;
                printf("%d\n", a);
            }
            printf("%d\n", a);
        }
        printf("%d\n", a);
    }
}