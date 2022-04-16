// Program to display the sum of first 10 positive integers
#include<stdio.h>
int main(){
    int i,r=0;
    for(i=1;i<=10;i++){
        r+=i;
    }
    printf("The sum of first 10 positive integers is %d",r);
return 0;
}