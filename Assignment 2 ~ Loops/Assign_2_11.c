// Program to calculate the factorial of any number using function
#include <stdio.h>
int n,i,f=1;
int fact()
{
    for(i=1;i<=n;i++){ f*=i; }
    printf("%d! = %d",n,f);
    return f;
}
int main()
{
  printf("Enter any number to get its factorial : ");
  scanf("%d",&n);
  fact();
 return 0;
}