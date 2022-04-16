// Program to calculate the sum of the following series : 1 + (x^2)/2! + (x^4)/4! + ………….(x^n)/n!
#include<stdio.h>
int main(){
float s1=1,s2=0,f=1,m=1;
int i,n,x;
printf("Enter the value of \'x\' & \'n\' for the series \'1 + (x^2)/2! + (x^4)/4! +........(x^n)/n!\' : ");
scanf("%d%d",&x,&n);
for(i=1;i<=(2*n);i++){
    m*=x;
    f*=i;
    if(i%2==0){
        s2+=m/f;
    }
}
s1+=s2;
printf("Sum upto term %d of the series is %f",i/2,s1);
return 0;
}