// Program to print the table of even number of the predeccessor input odd number
#include<stdio.h>
int main()
{
int n,i,t;
  printf("Enter any odd number : ");
  scanf("%d",&n);
  if (n%2!=0){
  printf("%d is an odd number ",n);
  n++;
  printf("\nSo the Table of %d is",n);
    for(i=1;i<=10;i++){
        t=n*i;
        printf("\n%d X %d = %d",n,i,t);
    }
  }
  else
  printf("%d is an even number , Please Enter Odd Number !!!!",n);
 return 0;
}