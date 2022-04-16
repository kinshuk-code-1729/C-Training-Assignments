// Program to find cube of any number using function
#include<stdio.h>
long cube(int n){
    return (n*n*n);
}
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("\nThe cube of %d is %ld",x,cube(x));
    return 0;
}