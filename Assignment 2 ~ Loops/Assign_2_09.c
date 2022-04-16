// Program to calculate raise to power of a number i.e. (n^m) without using pow() function of <math.h>
#include<stdio.h>
int main(){
    int b,p,r=1,i;
    printf("Enter Base number : ");
    scanf("%d",&b);
    printf("\nEnter Power value : ");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        r*=b;
    }
    printf("\n%d ^ %d = %d",b,p,r);
return 0;
}