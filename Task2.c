#include<stdio.h>
int main()
{
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    if (days <= 0) 
    {
        printf("No Fine\n");
    }
     else 
      if (days >= 1 && days <= 5)  
      {
            printf("Fine is Rs. 50\n");
        } 
        else 
            if (days >= 6 && days <= 10) 
            {
                printf("Fine is Rs. 100\n");
            }
             else
              {
                printf("Fine is Rs. 200\n");
            }
    return 0;
}