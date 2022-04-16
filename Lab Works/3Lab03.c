// Program to determine whether the year is a leap year or not.
#include <stdio.h>
int main() {
   int y;
   printf("Enter valid 4-Digit year : ");
   scanf("%d", &y);
 if(y%4==0) printf("%d is a leap year", y);
 else printf("%d is not a leap year", y);
   return 0;
}