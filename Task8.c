#include <stdio.h>
int main() 
{
    float marks;
    printf("Enter student marks: ");
    scanf("%f", &marks);
    if (marks >= 50) 
    {
        printf("You are Pass\n");
    }
     else
      {
        printf("You are Fail\n");
    }

    return 0;
}