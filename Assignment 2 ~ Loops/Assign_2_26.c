// Program to find the HCF of given two numbers
#include<stdio.h>
int main(){
int a,b,p,q,rem=1;
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
printf("HCF of %d and %d is %d",a,b,p);
return 0;
}