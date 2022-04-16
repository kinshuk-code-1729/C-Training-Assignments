/* Program to check whether the input value is divisible with the numbers from 1 to 10 ,
if divisible print the number is divisible by that number , else print the remainder after dividing the user defined number with the number */
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        if(n%i==0){
        printf("\n%d is divisible by %d",n,i);
        }
        else {
            printf("\nAfter dividing %d with %d the remainder is %d",n,i,n%i);
        }
    }
    return 0;
    }