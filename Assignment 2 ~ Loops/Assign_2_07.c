// Program for multiplication table generation
#include<stdio.h>
int main(){
    int i,n,t;
    printf("Enter any no. to print its table : ");
    scanf("%d",&n);
    printf("\nThe Multiplication Table of %d is",n);
    for(i=1;i<=10;i++){
        t=n*i;
        printf("\n%d X %d = %d",n,i,t);
    }
    return 0;
}