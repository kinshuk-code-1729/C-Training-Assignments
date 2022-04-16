// Program to calculate the sum of the following series : 1 + 1/2  + 1/3 + ………….1/n
#include<stdio.h>
int main(){
    float s=0;
    int n,i;
    printf("Enter the value of \'n\' for the series \'1 + 1/2  + 1/3 +........1/n\' : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=(float)1/i;
    }
    printf("Sum upto term %d of the series is %f",i-1,s);
    return 0;
}