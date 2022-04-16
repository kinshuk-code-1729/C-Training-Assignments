// Program to accept any decimal number and convert into octal
#include<stdio.h>
int main(){
    int n,s=0,m,i=1,j=0;
    printf("Enter a Decimal number : ");
    scanf("%d",&n);
    m=n;
    while(n!=0){
        j=n%8;
        s+=j*i;
        n/=8;
        i*=10;
    }
    printf("Octal Equivalent of %d is %d",m,s);
}