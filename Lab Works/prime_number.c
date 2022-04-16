#include<stdio.h>
int main(){
int i,num;
printf("Enter the number: ");
scanf("%d",&num);
for(i=2;i<=num-1;i++)
  if (num%i==0) break;
  if (num==1) printf("%d is neither prime nor composite",num);
  else if(i==num) printf("%d is a prime number",num);
  else printf("%d is not a prime number",num);
return 0;
}