// Program to print even numbers from 1 to 10 in reverse order
#include<stdio.h>
int main(){
    int i;
    printf("The even numbers between 1 and 10 in reverse order are : ");
    for(i=10;i>=0;i-=2) printf("%d\t",i);
    return 0;
}