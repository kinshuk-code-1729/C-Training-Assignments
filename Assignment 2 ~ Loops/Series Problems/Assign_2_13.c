// Program to calculate the sum of the following series : 1- 2 + 3 - 4……………n
#include<stdio.h>
int main(){
    int n,s_odd=0,s_even=0,s_net,i;
    printf("Enter the value of \'n\' for the series \'1- 2 + 3 - 4........n\' : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2!=0) s_odd+=i;
        else s_even+=i;
    }
    s_net=s_odd-s_even;
    printf("Sum upto term %d of the series is %d",i-1,s_net);
    return 0;
}