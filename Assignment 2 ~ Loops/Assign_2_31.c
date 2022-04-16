// Program to accept any number and display the sum of its each digit
#include<stdio.h>
int main(){
int s=0,n;
printf("Enter any number : ");
scanf("%d",&n);
while(n!=0){
    s+=n%10;
    n/=10;
}
printf("Sum of digits of given number is %d",s);
return 0;
}