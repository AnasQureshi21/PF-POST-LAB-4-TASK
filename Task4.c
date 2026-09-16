#include <stdio.h>
int main()
 {
    float length,width,perimeter,area;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Your area is  %.2f\n", area);
    printf("Your perimeter is %.2f\n", perimeter);

    return 0;
}