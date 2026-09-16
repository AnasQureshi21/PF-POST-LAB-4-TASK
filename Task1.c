#include<stdio.h>
int main()
{
    float marks,income;
    printf("Enter marks and income: ");
    scanf("\n %f %f", &marks, &income);
    if(marks>=80 && income<50000)
    {
        printf("You are eligible for scholarship");
    }
    else
    {
        printf("You are not eligible for scholarship");
    }
    return 0;
}

