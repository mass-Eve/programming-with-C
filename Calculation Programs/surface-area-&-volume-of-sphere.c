#include<stdio.h>
#include<conio.h>
void main()
{
    float r, SA, V;
    printf("Enter the value of radius (in cm) = \n");
    scanf("%f", &r);

    SA = 4*3.14*(r*r);
    printf("The surface area of the sphere of radius = %f cm is, %f cm^2. \n", r, SA);

    V = (4/3)*3.14*(r*r*r);
    printf("The volume of the sphere of radius = %f cm is, %f cm^3. ", r, V);

}