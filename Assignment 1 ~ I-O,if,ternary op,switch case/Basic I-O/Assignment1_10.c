// Swapping two numbers using a temporary variable
#include<stdio.h>
int main()
{
 int x,y,t;
 printf("Enter 1st Value : ");
 scanf("%d",&x);
 printf("\nEnter 2nd Value : ");
 scanf("%d",&y);
 printf("\nThe values before swapping are : V1 = %d , V2 = %d",x,y);
 t=x;x=y;y=t;
 printf("\nThe values after swapping are : V1 = %d , V2 = %d",x,y);
return 0;
}