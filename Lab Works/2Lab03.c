// Program to find Remainder and Quotient
#include<stdio.h>
int main()
{
  int w,x,y,z;
  printf("Enter Dividend : ");
  scanf("%d",&w);
  printf("Enter Divisor : ");
  scanf("%d",&x);

 // Calculating the QUOTIENT
  y=w/x;

 // Calculating the REMAINDER
  z=w%x;
  
  printf("Quotient = %d",y);
  printf("\nRemainder = %d",z);
  return 0;
}