#include<stdio.h>
#include<conio.h>
void main()
{
    float length;
    float breadth;
    float area;

    printf("Enter the length of the reactangle = ");
    scanf("%f", &length);
    printf("Enter the breadth of the reactangle = ");
    scanf("%f", &breadth);

    area = length * breadth ;

    printf("The area of reactangle with length = %f & breadth = %f is %f.", length, breadth, area);


}