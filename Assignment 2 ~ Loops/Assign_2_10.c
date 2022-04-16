// Program to accept 10 numbers from user and find the maximum and minimum
#include<stdio.h>
int main(){
    int n,i,max=0,min=0;
    for(i=1;i<=10;i++){
        printf("Enter Number %d : ",i);
        scanf("%d",&n);
    if(i==1){
        max=n;
        min=n;
    }
    if(n>max) max=n;
    if(n<min) min=n;
    }
    printf("\nMAX = %d\tMIN = %d",max,min);
    return 0;
}