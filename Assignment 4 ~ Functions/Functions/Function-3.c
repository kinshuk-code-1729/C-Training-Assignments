// Program to find maximum and minimum between two numbers using functions
#include <stdio.h>
int max(int a, int b){
    return ((a>b)?a:b);
}
int min(int p, int q){
    return ((p<q)?p:q);
}
int main(){
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);
    printf("\nMax = %d\tMin = %d",max(x,y),min(x,y));
    return 0;
}