// Cube of a user-defined number
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter any number to find its cube : ");
    scanf("%d",&x);
    y=x*x*x;
    printf("\nThe Cube of %d is %d",x,y);
    return 0;
}