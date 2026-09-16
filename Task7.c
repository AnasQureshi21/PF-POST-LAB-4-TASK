#include <stdio.h>
int main() 
{
    float number1, number2, number3, average;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &number1, &number2, &number3);
    average = (number1 + number2 + number3) / 3;
    printf("Average = %.2f\n", average);

    return 0;
}