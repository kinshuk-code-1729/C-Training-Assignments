// Finding Larger number from two user-defined numbers using if statement
#include<stdio.h>
int main()
{ int x,y;
  printf("Enter two numbers : ");
  scanf("%d%d",&x,&y);

  if (x>y)
  printf("%d is larger number",x);
  else
  printf("%d is larger number",y);
 return 0;
}