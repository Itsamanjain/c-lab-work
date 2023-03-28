#include <stdio.h>

int main() {
   int year;

   printf("Enter a year: ");
   scanf("%d", &year);

   // Check if the year is a leap year or not
   if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
   return 0;
}