// Program to find power of any number using recursion
#include<stdio.h>
double power(int x,int y){
    if(y==0){
        return 1;
    }
    else if(y>0){
        return x*power(x,y-1);
    }
    else{
        return 1 / power(x,-y);
    }
}
int main(){
    int base,exp;
    double res;
    printf("Enter Base Value : ");
    scanf("%d",&base);
    printf("Enter Exponent Numer : ");
    scanf("%d",&exp);
    res=power(base,exp);
    printf("(%d^%d) = %lf",base,exp,res);
;return 0;
}