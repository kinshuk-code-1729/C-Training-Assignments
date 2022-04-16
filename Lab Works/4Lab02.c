// Program to calculate factorial of a number
#include<stdio.h>
int main(){
    int i,f=1,n;
    printf("Enter any no. to get its factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("\n %d! = %d",n,f);
    return 0;
}