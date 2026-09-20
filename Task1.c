#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age: ");
    scanf("%d ",&age);
    printf("Enter your marks: ");
    scanf("%d \n",&marks);
   if(age>=18)
   {
        if(marks>=50)
             {
               printf("You are eleigible for admission");
             }
        else
             {
               printf("You are not eleigible for admission because your marks are less than 50");     
            } 
   }
  else
  {
      printf("You are not eleigible for admission because your age is less than 18");
  }

    return 0;
}