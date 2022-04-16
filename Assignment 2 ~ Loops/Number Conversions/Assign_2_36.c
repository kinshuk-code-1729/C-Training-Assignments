// Program to accept any binary number and convert into decimal
#include<stdio.h>
int main(){
    int n,s=0,m,i=1,j=0;
    printf("Enter a Binary number : ");
    scanf("%d",&n);
    m=n;
    while(n!=0){
        j=n%10;
        s+=j*i;
        n/=10;
        i*=2;
    }
    printf("Decimal Equivalent of %d is %d",m,s);
}