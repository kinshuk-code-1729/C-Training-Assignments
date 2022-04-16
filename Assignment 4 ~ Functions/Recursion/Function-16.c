// Program to check whether a number is palindrome or not using recursion
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
int palindrome_chk(int k){
    return (k==num_rev(k));
}
int main(){
    int n,rev;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(palindrome_chk(n)){
        printf("\n%d is a palindrome number",n);
    }
    else{
        printf("\n%d is NOT a palindrome number",n);
    }
return 0;
}