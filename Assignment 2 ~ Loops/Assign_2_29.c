// Program to accept any number and print it vertically
#include<stdio.h>
int main(){
    int n,r=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("\nVertically number the number is");
    while(n!=0){
        r=n%10;
        n/=10;
        printf("\n%d",r);
    }
    return 0;
}