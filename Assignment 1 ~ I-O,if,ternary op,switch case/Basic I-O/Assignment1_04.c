// Dividing 2 User-Defined Numbers using float format specifier
#include<stdio.h>
int main()
{
 float x,y,z;
printf("Enter Two numbers : ");
scanf("%f %f",&x,&y);
z=x/y;
printf("\n%d / %d = %f",(int)x,(int)y,z);
return 0;
}