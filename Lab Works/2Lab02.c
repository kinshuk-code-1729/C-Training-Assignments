// Program to find Largest number
#include<stdio.h>
int main()
{
 int x,y,z;
 printf("Enter Three different numbers : ");
 scanf("%d %d %d",&x,&y,&z);

 // IF x is greater than both y and z, then x is the largest number
 if(x>=y && x>=z)
   printf("\n%d is the greatest number among all three numbers",x);

 // IF y is greater than both x and z, then y is the largest number
 if(y>=x && y>=z)
   printf("\n%d is the greatest number among all three numbers",y);

 // IF z is greater than both x and y, then z is the largest number
 if(z>=x && z>=y)
   printf("\n%d is the greatest number among all three numbers",z);

return 0;
}