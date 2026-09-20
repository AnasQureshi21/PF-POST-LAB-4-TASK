#include <stdio.h>1
int main()
{
    int department, section;
    printf("Select Department: 1 for Computer Science, 2 for Information Technology, 3 for Artificial Intelligence\n");
    printf("Enter your choice: ");
    scanf("%d", &department);
    switch (department)
    {
        case 1:
            printf("Department: Computer Science\n");
            printf("Select Section 1 for section A, 2 for section B:\n");
            printf("Enter your choice: ");
            scanf("%d", &section);

            switch (section)
            {
                case 1:
                    printf("Section: A");
                    break;

                case 2:
                    printf("Section: B");
                    break;

                default:
                    printf("Invalid Section");
            }
            break;
        case 2:
            printf("Department: Information Technology\n");
            printf("Select Section: 1 for section A, 2 for section B \n");
            printf("Enter your choice: ");
            scanf("%d", &section);
            switch (section)
            {
                case 1:
                    printf("Section: A");
                    break;

                case 2:
                    printf("Section: B");
                    break;

                default:
                    printf("Invalid Section");
            }
            break;

        case 3:
            printf("Department: Artificial Intelligence\n");
            printf("Select Section: 1 for section A, 2 for section B \n");
            printf("Enter your choice: ");
            scanf("%d", &section);

            switch (section)
            {
                case 1:
                    printf("Section: A");
                    break;

                case 2:
                    printf("Section: B");
                    break;

                default:
                    printf("Invalid Section");
            }
            break;

        default:
            printf("Invalid Department");
    }

    return 0;
}