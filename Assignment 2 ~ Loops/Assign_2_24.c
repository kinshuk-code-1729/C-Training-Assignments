// Program to display the N elements of Fibonacci series
#include<stdio.h>
int main(){
    int x=0,y=1,z=0,N,i;
    printf("Enter Last term \'N\' : ");
    scanf("%d",&N);
    printf("\nThe elements Fibonacci Series upto %d is : ",N);
    for(i=1;i<=N;i++){
        printf("%d\t",z);
        z=x+y;
        x=y;
        y=z;
    }
    return 0;
}