// Float to int conversion
#include<stdio.h>
int main()
{
   int x,y;
   float f1,f2,s;
   printf("Enter a Float number = ");
   scanf("%f",&f1);
   printf("\nEnter another Float number = ");
   scanf("%f",&f2);

   printf("\n1st float value is : %f",f1);
   printf("\n2nd float value is : %f",f2);
   x=(int)(f1+0.5);
   y=(int)(f2+0.5);
   printf("\n1st int value is : %d",x);
   printf("\n2nd int value is : %d",y);
 return 0;
}
