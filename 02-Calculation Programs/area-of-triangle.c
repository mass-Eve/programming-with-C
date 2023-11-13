#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a, b, c, s, area;

    printf("Enter length of side 1 :- ");
    scanf("%f", &a);

    printf("Enter length of side 2 :- ");
    scanf("%f", &b);
    
    printf("Enter length of side 3 :- ");
    scanf("%f", &c);

    s = (a + b + c)/2;
    area = sqrt( s*(s-a)*(s-b)*(s-c) );
    printf("The area of the triangle with the following dimensions is %f cm^2.", area);
    
}