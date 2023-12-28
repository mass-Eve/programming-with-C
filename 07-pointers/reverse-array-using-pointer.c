#include<stdio.h>

void main()
{
    // main array
    int marks[] = {5, 8, 6, -8, 4};
    int *mp;
    mp = &marks[((sizeof(marks)/4)-1)];

    // reverse array
    int marks_rev[sizeof(marks)/4];

    int j = 0;
    for (int i = (sizeof(marks)/4)-1; i >= 0 ; i--)
    {
        for (;;) 
        {
            marks_rev[j] = *mp;
            j++;
            break;
        }
        mp = mp - 1;
    }

    int *mp2; 
    mp2 = marks_rev;
    for (int k = 0; k < (sizeof(marks)/4); k++)
    {
        printf("%d", *mp);
        mp++;
    }
}