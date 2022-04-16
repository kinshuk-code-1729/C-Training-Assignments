// Program to calculate the sum of the following series : 1/2 + 2/3  + 3/4 + ………….n/n+1
#include<stdio.h>
int main(){
    float s=0;
    int n,i;
    printf("Enter the value of \'n\' for the series \'1/2 + 2/3  + 3/4 +........n/n+1\' : ");
    scanf("%d",&n);
        for(i=1;i<=n;i++){
        s+=(float)i/(i+1);
    }
    printf("Sum upto term %d of the series is %f",i-1,s);
    return 0;
}