// Program to display and count the all prime numbers between 1 to n
#include<stdio.h>
int main(){
    int n,i,c=0,j,count=0;
    printf("Enter \'n\' : ");
    scanf("%d",&n);
    printf("\nThe prime numbers between 1 to %d are ",n);
    for(i=2;i<=n;i++){
    for(j=2;j<=i;j++){
    if (i%j==0) break;
    }
    if(j==i){ 
    count++;
    printf("\n%d",i);
    }
    }
    printf("\nTotal prime numbers in given range = %d",count);
    return 0;
}