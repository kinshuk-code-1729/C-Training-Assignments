// Program to display the sum of all even numbers between 1 to 100
#include<stdio.h>
int main(){
    int i,r=0;
    for(i=2;i<=100;i+=2){
        r+=i;
    }
    printf("The sum of all even numbers between 1 to 100 is %d",r);
return 0;
}