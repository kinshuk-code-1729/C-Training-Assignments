#include<stdio.h>
int main(){
    int n,i,oc=0,ec=0;
    for(i=1;i<=10;i++){
        printf("Enter Number %d : ",i);
        scanf("%d",&n);
    if(n%2==0) ec++;
    else oc++;
    }
    printf("\nODD COUNT = %d\tEVEN COUNT = %d",oc,ec);
    return 0;
}