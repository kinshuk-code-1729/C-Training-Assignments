// Greater number between three numbers using ternary operator
#include<stdio.h>
int main(){
  int x,y,z;
  printf("Enter three numbers : ");
  scanf("%d%d%d",&x,&y,&z);
  x>y ? x>z ?printf("%d is greatest among all three numbers",x) : printf("%d is greatest among all three numbers",z)
  : y>z ? printf("%d is greatest among all three numbers",y) : printf("%d is greatest among all three numbers",z);
 return 0;
}
