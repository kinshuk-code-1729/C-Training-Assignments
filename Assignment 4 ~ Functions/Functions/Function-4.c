// Program to check whether a number is even or odd using functions
#include<stdio.h>
int oddcheck(int n){
    return (n&1);
}
int main(){
    int x;
    printf("Enter Any Number : ");
    scanf("%d",&x);
    if(oddcheck(x)) printf("\n%d is an odd number",x);
    else printf("\n%d is an even number",x);
    return 0;
}