// EVEN ODD CHECKING
#include<stdio.h>
int main()
{
int x;
  printf("Enter a number to check whether it is odd or even : ");
  scanf("%d",&x);

  if (x%2==0)
  printf("%d is an even number ",x);

  else
  printf("%d is an odd number",x);

 return 0;
}