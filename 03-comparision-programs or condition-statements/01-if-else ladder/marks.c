// Write a program to find the division of a student having 5 subjects in the curriculum where each subject has a maximum of 20 marks.

#include<stdio.h>
#include<conio.h>
void main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float percentage;

    printf("Enter each subject's marks out of 20. \n");

    printf("Enter marks in subject 1:");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // printf("Enter marks in subject 2:");
    // scanf("%f", &sub2);

    // printf("Enter marks in subject 3:");
    // scanf("%f", &sub3);

    // printf("Enter marks in subject 4:");
    // scanf("%f", &sub4);

    // printf("Enter marks in subject 5:");
    // scanf("%f", &sub5);

    percentage = ((sub1 + sub2 + sub3 + sub4 + sub5)/100)*100 ;
    if (percentage>=75 && percentage<=100)
        printf("\n Ist Division with Honours");
        
    else if (percentage>=60 && percentage<75)
        printf("\n Ist Division.");
        
    else if (percentage>=45 && percentage<60)
        printf("\n IInd Division.");
        
    else if (percentage>=33 && percentage<45)
        printf("\n IIIrd Division.");
        
    else
        printf("\n Fail");
}