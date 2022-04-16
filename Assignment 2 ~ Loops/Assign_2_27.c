// Program to find the LCM of given two numbers
#include<stdio.h>
int main(){
int a,b,p,q,rem=1,lcm,hcf;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
if(a-b>0){
p=a;q=b;
}
else{
    q=a;p=b;
}
while (rem!=0){
    rem=p%q;
    p=q;
    q=rem;
}
hcf=p;
lcm=(a*b)/hcf;
printf("For the numbers %d and %d\nLCM = %d\tHCF = %d",a,b,lcm,hcf);
return 0;
}