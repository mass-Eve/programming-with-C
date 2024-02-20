#include<stdio.h>

// a function to increment the value of a variable and return it
int incrementFunc(int num){
    num++ ;
    printf("Now the value of number is %d\n", num);
    return num;
}

int a = 5;

void main(){
    int x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
}