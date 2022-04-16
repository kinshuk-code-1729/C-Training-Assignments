// Program to check if a number is positive or negative using if-else
#include<stdio.h>
int main(){
 int x;
 printf("Enter any number to check whether it is positive or negative : ");
 scanf("%d",&x);
 if(x>0) printf("\n%d is a positive number",x);
 else if(x<0) printf("\n%d is a negative number",x);
 else if(x==0) printf("\n%d is neither positive nor negative",x);
 return 0;
}