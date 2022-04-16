// Program to check the entered number is palindrome or not
#include<stdio.h>
int main(){
    int n,r=0,rem=0,m;
    printf("Enter a Number : ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    // printf("\nIn reverse number is %d",r);
    if(r==m) printf("\nSo, %d is a palindrome number",m);
    else printf("\nSo, %d is not a palindrome number",m);
    return 0;
}