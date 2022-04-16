// Program to accept any decimal number and convert into binary
#include<stdio.h>
int main(){
    int n,s=0,m,i=1,j=0;
    printf("Enter a Decimal number : ");
    scanf("%d",&n);
    m=n;
    while(n!=0){
        j=n%2;
        s+=j*i;
        n/=2;
        i*=10;
    }
    printf("Binary Equivalent of %d is %d",m,s);
}