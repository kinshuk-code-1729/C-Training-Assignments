// Program to calculate the sum of the following series : 1 + x + (x^2)/2 + (x^3)/3 + ………….(x^n)/n
#include<stdio.h>
int main(){
float s1=1,s2=0;
int n,x,i,m=1;
printf("Enter the value of \'x\' & \'n\' for the series \'1 + x + (x^2)/2 + (x^3)/3 +........(x^n)/n\' : ");
    scanf("%d%d",&x,&n);
        for(i=1;i<n;i++){
            m*=x;
            s2+= (float)m/i;
        }
    s1+=s2;
    printf("Sum upto term %d of the series is %f",i,s1);
return 0;
}