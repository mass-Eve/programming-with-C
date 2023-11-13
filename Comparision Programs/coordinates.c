// Write a program to enter the co-ordinates of the centre of a circle as (x1, y1), the co-ordinates of a random point as (x2, y2) & the length of the diameter of the circle. Now find if the random point lies inside the circle, outside the circle or on the circumference of the circle.

#include<stdio.h>
#include<math.h>
void main()
{
    int x1, y1, x2, y2;
    float diameter, distance;

    printf("Enter the co-ordinates of the centre of the circle as (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the co-ordinates of the point to check as (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter the length of the diameter: ");
    scanf("%d", &diameter);

    distance = sqrt( ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) ) ;

    if (distance == diameter / 2.0){
        printf("The point (%d, %d) lies on the circumference of the circle.", x2, y2);
    }

    else if (distance > diameter / 2.0){
        printf("The point (%d, %d) lies outside the circumference of the circle.", x2, y2);
    }

    else{
        printf("The point (%d, %d) lies inside the circumference of the circle.", x2, y2);
    }
}