// Calculating Simple Interest
#include<stdio.h> 
int main()
{
  int p;
  float r,t,a;
  printf("Enter Principle Amount in Rs. : ");
  scanf("%d",&p);
  printf("\nEnter Rate of Interest : ");
  scanf("%f",&r);
  printf("\nEnter Time in years : ");
  scanf("%f",&t);
  a=(p*r*t)/100;
  printf("The Simple Interest for given principle amount is : %f",a);
  return 0;
}