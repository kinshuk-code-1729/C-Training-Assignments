// Program to find reverse of any number using recursion
#include<stdio.h>
int r,s=0;
int num_rev(int x){
    if(x!=0){
        r=x%10;
        s=s*10+r;
        num_rev(x/10);
    }
    else{
        return s;
    }
return s;
}
int main(){
    int n,rev;
    printf("Enter any number : ");
    scanf("%d",&n);
    rev=num_rev(n);
    printf("\nReversed number of %d is %d",n,rev);
return 0;
}