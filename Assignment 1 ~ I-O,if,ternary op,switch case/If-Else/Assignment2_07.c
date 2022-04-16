// Any program is through the keyboard. Write a program to determine whether the year is a leap year or not.
#include <stdio.h>
int main() {
   int y;
   printf("Enter Any Year to check whether it is a LEAP YEAR or not : ");
   scanf("%d", &y);
 if( ( (y%4==0) && (y%100!=0) ) || (y%400==0) ) printf("%d is a LEAP YEAR", y);
 else printf("%d is not a LEAP YEAR", y);
   return 0;
}