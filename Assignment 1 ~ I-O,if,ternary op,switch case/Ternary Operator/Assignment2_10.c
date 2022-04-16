// Find even and odd numbers using condition operator (Ternary operator)
#include<stdio.h>
int main()
{
  int x;
  printf("Enter a number to check whether it is odd or even : ");
  scanf("%d",&x);

 x%2==0?printf("%d is an even number ",x):printf("%d is an odd number",x);
 return 0;
}