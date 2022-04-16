// Program to find sum of digits of a given number using recursion
#include<stdio.h>
int sum_digits(int m){
    int r;
    r=m%10;
    if(m==0){
        return 0;
    }
    return r + sum_digits(m/10);
}
int main(){
int n,s;
printf("Enter any number : ");
scanf("%d",&n);
s=sum_digits(n);
printf("\nSum of digits of %d is %d",n,s);
return 0;
}