// Program to find factorial of any number using recursion
#include<stdio.h>
long factorial(int f){
    if(f==1){
        return f;
    }
    else{
        return f * factorial(f-1);
    }
}
int main(){
    int n;
    long fact;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n<0){
        printf("\nSorry !!!, factorial for a negative number does not exist");
    }
    else if(n==0){
        printf("\nThe factorial of 0 is 1");
    }
    else{
        fact=factorial(n);
        printf("\nThe factorial of %d is %ld",n,fact);
    }
return 0;
}