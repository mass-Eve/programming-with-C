#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int x1, x2, y1, y2;
    float radius;

    printf("Enter (x1,y1) coordinate: ");
    scanf("%d%d", &x1, &y1);
    // printf("Enter y1 coordinate: ");
    // scanf("%d", &y1);
    printf("Enter (x2,y2) coordinate: ");
    scanf("%d%d", &x2, &y2);
    // printf("Enter y2 coordinate: ");
    // scanf("%d", &y2);

    radius = (sqrt( pow( (x2 - x1), 2 ) + pow( (y2 - y1), 2 ) )) / 2;
    printf("The radius is %f", radius);
}