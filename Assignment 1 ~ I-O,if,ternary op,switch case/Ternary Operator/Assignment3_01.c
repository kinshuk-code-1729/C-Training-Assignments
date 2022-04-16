// Greater number between two numbers using ternary operator
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
  x>y?printf("%d is larger number",x):printf("%d is larger number",y);
 return 0;
}