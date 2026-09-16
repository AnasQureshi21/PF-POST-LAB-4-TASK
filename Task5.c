#include <stdio.h>
int main()  
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The square of %d = %d\n", num, num * num);
    printf("The cube of %d = %d\n", num, num * num * num);
    
    return 0;
}