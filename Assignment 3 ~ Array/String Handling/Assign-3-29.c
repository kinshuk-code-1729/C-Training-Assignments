// Program to check entered string is palindrome or not, using library functions
#include<stdio.h>
#include<string.h>
int main(){
  char x[10],y[10];
  printf("Enter any string : ");
  gets(x);
  strcpy(y,x);
  strrev(y);
  if(!(strcmp(x,y))){
    printf("\n%s is a palindrome string",x);
  }
  else{
    printf("\n%s is not a palindrome string",x);
  }
return 0;
}