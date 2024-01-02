#include<stdio.h>
// void main()
// {
//     static int a;   // a = 0, assigned automatically
//     printf("static a: %d\n", a);

//     int b;
//     printf("normally b: %d\n", b);

// }

void update(){
    static int a = 1;
    printf("this is static a: %d\n", a);
    a++;
}

void main()
{
    printf("Calling it first time\n");
    update();
    printf("Calling it 2nd time\n");
    update();
    printf("Calling it 3rd time\n");
    update();
    printf("Calling it 4th time\n");
    update();
}