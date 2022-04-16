// Program to calculate the sum of the following series : 1 - x + x^2 - x^3 …………. x^n
#include<stdio.h>
int main(){
 int x,n,i,m=1;
 float s_odd=0,s_even=0,s_net=1;
    printf("Enter the value of \'x\' & \'n\' for the series \'1 - x + x^2 - x^3........x^n\' : ");
    scanf("%d%d",&x,&n);
    for(i=1;i<n;i++){
        if(i%2!=0){
            m*=x;
            s_odd+=m;
        }
        else{
            m*=x;
            s_even+=m;
        }
    }
    s_net+=s_even-s_odd;
    printf("Sum upto term %d of the series is %f",i,s_net);
return 0;
}