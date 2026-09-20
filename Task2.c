#include <stdio.h>

int main()
{
    int cnic,test;
    printf("Do you have CNIC (1 for Yes and 0 for No): ");
    scanf("%d", &cnic);
    if(cnic==1)
    {
        printf("Have you passed the driving test? (1 = Yes, 0 = No): ");
        scanf("%d", &test);

        if (test==1)
        {
            printf("License Can Be Issued");
        }
        else
        {
            printf("License Cannot Be Issued to you as driving test not passed");
        }
    }
    else
    {
        printf("License Cannot Be Issued to you as CNIC is`1 required");
    }

    return 0;
}