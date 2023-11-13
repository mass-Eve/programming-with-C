#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int a,b,c;
    int root1, root2;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    printf("Therefor, the quadratic equation is ~ %dx^2 + %dx + c = 0", a, b, c);

    root1 = ( -b + sqrt( pow(b,2) - 4*a*c ) ) / (2*a) ;
    root2 = ( -b - sqrt( pow(b,2) - 4*a*c ) ) / (2*a) ;

    printf("\nroot1 = %d", root1);
    printf("\nroot2 = %d", root2);
}