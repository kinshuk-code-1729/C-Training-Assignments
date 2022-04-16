// Program to print the sum of odd numbers from 1 to 10
#include<stdio.h>
int main(){
    int i,r=0;
    for(i=1;i<=10;i+=2){
        r+=i;
    }
    printf("The sum of odd numbers from 1-10 is %d",r);
return 0;
}