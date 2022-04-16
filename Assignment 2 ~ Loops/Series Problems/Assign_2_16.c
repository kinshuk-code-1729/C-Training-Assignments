// Program to calculate the sum of the following series : 1 + x + x^2 + x^3 …………. x^n
#include<stdio.h>
int main(){
    float s=1;
    int n,x,i,m=1;
    printf("Enter the value of \'x\' & \'n\' for the series \'1 + x + x^2 + x^3 +........x^n\' : ");
    scanf("%d%d",&x,&n);
        for(i=1;i<n;i++){
            m*=x;
            s+=m;
    }
    printf("Sum upto term %d of the series is %f",i,s);
return 0;
}