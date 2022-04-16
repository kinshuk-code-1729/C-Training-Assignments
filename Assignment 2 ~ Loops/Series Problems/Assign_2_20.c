// Program to calculate the sum of the following series : 1 - x/1! + (x^2)/2! - (x^3)/3! + ………….(x^n)/n!
#include<stdio.h>
int main(){
float s_even=0,s_odd=0,s_net=1,f=1;
int x,n,m=1,i;
    printf("Enter the value of \'x\' & \'n\' for the series \'1 - x/1! + (x^2)/2! - (x^3)/3! +........(x^n)/n!\' : ");
    scanf("%d%d",&x,&n);
    for(i=1;i<n;i++){
        if(i%2!=0){
            m*=x;
            f*=i;
            s_odd+=(float)m/f;
        }
        else{
            m*=x;
            f*=i;
            s_even+=(float)m/f;
        }
    }
    s_net+=s_even-s_odd;
    printf("Sum upto term %d of the series is %f",i,s_net);
return 0;
}