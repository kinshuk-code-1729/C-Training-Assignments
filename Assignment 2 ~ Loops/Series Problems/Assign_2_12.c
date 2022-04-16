// Program to calculate the sum of the following series : 1 + 2 + 3 +……………n
#include<stdio.h>
int main(){
    int n,s=0,i;
    printf("Enter the value of \'n\' for the series \'1 + 2 + 3 +........n\' : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=i;
    }
    printf("Sum upto term %d of the series is %d",i-1,s);
    return 0;
}