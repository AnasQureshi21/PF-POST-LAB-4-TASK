#include<stdio.h>
int main()
{
    char fullName[100];
    char ch;
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Your entered name: ");
    puts(fullName);
    printf("Enter a single character to see the difference: ");
    scanf(" %c", &ch);
    printf("Your single character is: %c\n", ch);

    return 0;
}
