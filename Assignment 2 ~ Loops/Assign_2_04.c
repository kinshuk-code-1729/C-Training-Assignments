// Program to display all even numbers between 1 to 50
#include<stdio.h>
int main(){
    int i;
    printf("The even numbers between 1 to 50 are :");
    for(i=2;i<=50;i+=2) printf("\t%d",i);
    return 0;
}