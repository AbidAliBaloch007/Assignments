
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char choice;

   printf("Time Table of BS Computer Science First Semester\n");
   printf("1. Monday\n");
   printf("2. Tuesday\n");
   printf("3. Wednesday\n");
   printf("4. Thursday\n");
   printf("5. Friday\n");
   printf("6. Saturday\n");
   printf("7. Sunday\n");
   printf("Enter the given number above in order to get the detail of the class\n");

   scanf(" %c", &choice);
  if(choice == '1')
  {
     printf("------------------------------------------\n");
      printf("Today is the class of ICT\n");
      printf("Teacher   Name:Sir Asfand Yar Khan\n");
      printf("Timing:   09:30 to 12:00\n");
      printf("------------------------------------------\n");

  }if(choice == '2')
  {
      printf("------------------------------------------\n");
      printf("Today is the class of Programming Fundamantal\n");
      printf("Teacher   Name:Sir Imran Ali\n");
      printf("Timing:   09:30 to 12:00\n");
      printf("------------------------------------------\n");

  }if(choice == '3')
  {
     printf("------------------------------------------\n");
      printf("Today is the class of Physics\n");
      printf("Teacher Name:Sir Shams\n");
      printf("Timing:   09:30 to 12:00\n");
      printf("------------------------------------------\n");

  }if(choice == '4')
  {
      printf("------------------------------------------\n");
      printf("Today is the class of English Composition\n");
      printf("Teacher  Name: Mir Sadaat Baloch\n");
      printf("Timing:  10:00 to 12:00\n");
      printf("------------------------------------------\n");

  }if(choice == '5')
  {
      printf("------------------------------------------\n");
      printf("Today is the class of Calculus\n");
      printf("Teacher   Name:  Sir Naveed Shaikh\n");
      printf("Timing:     09:30 to 12:30\n");
      printf("------------------------------------------\n");

  }if(choice == '6')
  {
     printf("------------------------------------------\n");
      printf("Its Holiday Today, Have Fun Enjoy!!! \n");
    printf("------------------------------------------\n");
  }
  if(choice == '7')
  {
     printf("------------------------------------------\n");
     printf("Its Holiday Today, Have Fun Enjoy!!!\n");
      printf("------------------------------------------\n");
  }
    return 0;
}
