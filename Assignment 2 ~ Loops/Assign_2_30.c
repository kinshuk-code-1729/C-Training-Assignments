// Program to accept any number and print in reverse order
#include<stdio.h>
int main(){
    int n,r=0,rem=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    printf("\nNumber in reverse order is : %d",r);
    return 0;
}