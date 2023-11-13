// Write a program to find the division of a student having 5 subjects in the curriculum where each subject has a maximum of 20 marks.

#include<stdio.h>
#include<conio.h>
void main()
{
    int sub1, sub2, sub3, sub4, sub5, agg;

    printf("Enter marks in subject1 -:");
    scanf("%d", &sub1);
    printf("Enter marks in subject2 -:");
    scanf("%d", &sub2);
    printf("Enter marks in subject3 -:");
    scanf("%d", &sub3);
    printf("Enter marks in subject4 -:");
    scanf("%d", &sub4);
    printf("Enter marks in subject5 -:");
    scanf("%d", &sub5);

    agg = (sub1 + sub2 + sub3 + sub4 + sub5);
    printf("%d", agg);

    if (agg >= 75)
    {
        printf("Ist Division with Honours!");
    }
    else if (agg >= 60 && agg < 75)
    {
        printf("Ist Division!");
    }
    else if (agg >= 45 && agg < 60)
    {
        printf("IInd Division!");
    }
    else if (agg >= 33 && agg < 45)
    {
        printf("IIIrd Division!");
    }
    else{
        printf("Fail!");
    }
}