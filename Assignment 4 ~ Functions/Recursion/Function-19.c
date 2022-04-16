// Program to generate nth Fibonacci term using recursion
#include<stdio.h>
long fibonacci(int m){
    if(m==1){
        return 0;
    }
    else if(m==2){
        return 1;
    }
    else{
        return fibonacci(m-1) + fibonacci(m-2);
    }
}
int main(){
    int n;
    long fib;
    printf("Enter \'n\' to generate \"nth\" Fibonacci Term : ");
    scanf("%d",&n);
    if(n<=0){
        printf("\nPlease enter a positive integer !!!!");
    }
    else{
        fib=fibonacci(n);
        printf("%dth Fibonacci Term = %ld",n,fib);
    }
return 0;
}