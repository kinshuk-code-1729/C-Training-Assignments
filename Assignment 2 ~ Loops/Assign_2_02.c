// Program to display first 10 positive integers in reverse order on the screen using do __ while() loop
#include<stdio.h>
int main(){
    int i=10;
    do
    {   printf("%d\t",i);
        i--;
    }
    while(i>0);
 return 0;
}