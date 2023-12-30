// WAP to traverse through an array one by one element and also print the memory address of that element, all using pointers only. 

#include<stdio.h>
void main(){

    // An array storing the marks of a student
    int marks[] = {5, 8, 6, -8, 4};
    
    // A pointer having the address of the last element of the array <marks>
    int *mp;
    mp = &marks[sizeof(marks)/4-1];

    // A loop to iterate through the array.
    for (int i = (sizeof(marks)/4 - 1); i >= 0 ; i--)
    {
        // To print the memory address using the pointer
        printf("array value using pointer: %d\n", *mp);
        
        // To print the value stored in the array <marks> at the following memory address stored in the pointer.
        printf("it memory address: %p\n", mp);

        // Since values in an array are stored in continuou memory locations, deccrementing the memory address by 1 can give us the memory address of the next element of the array.
        mp = mp - 1;
    }
}