#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float KE, m, v;

    printf("Enter the Kinetic Energy of the object in Joules: ");
    scanf("%f", &KE);
    printf("Enter mass the of the object in kgs: ");
    scanf("%f", &m);

    v = sqrt((2*KE)/m);
    printf("The velocity is %f m/s", v);

}