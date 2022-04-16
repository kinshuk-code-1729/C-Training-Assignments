// Program to check entered number is prime or not
#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(!(n%i)){
            c=1;
            break;
        }
       }
    if(!c) printf("\n%d is a prime number",n);
    else printf("\n%d is not a prime number",n);
    return 0;
}