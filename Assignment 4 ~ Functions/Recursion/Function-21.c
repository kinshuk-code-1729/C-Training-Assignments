// Program to find LCM of two numbers using recursion
#include<stdio.h>
int hcf(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return hcf(y,x%y);
    }
}
int lcm(int p,int q){
    int gcd,LCM;
    gcd=hcf(p,q);
    LCM=(p*q)/gcd;
    return LCM;
}
int main(){
    int a,b,l;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    l=lcm(a,b);
    printf("\nLCM of %d and %d is : %d",a,b,l);
return 0;
}