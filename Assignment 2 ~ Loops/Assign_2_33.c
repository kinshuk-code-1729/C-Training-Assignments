// Program to accept any number and check whether it is Armstrong or not
#include<stdio.h>
int main()
{
int m,n,r,s=0;
printf("Enter any 3-digit number : ");
scanf("%d",&n);
m=n;
while(n>0)
{
 r=n%10;
 s+=r*r*r;
 n/=10;
}
if(s==m) printf("\n%d is an Armstrong number",m);
else printf("\n%d is not an Armstrong number",m);
return 0;
}