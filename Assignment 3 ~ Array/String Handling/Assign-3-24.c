// Program to accept two strings and compare it
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    char x[10],y[10];
    int i,j,a=0,b=0,p=0,q=0;
    printf("Enter two strings : ");
    gets(x);
    gets(y);
    while(x[p]!='\0'){
        p++;
    }
    while(y[q]!='\0'){
        q++;
    }
    if(q!=p){
        printf("\nLength is not same !!! , Comparison not possible !!!");
        getch();
        exit(1);
    }
    else{
        i=j=0;
        while(x[i]!='\0'){
            a+=x[i];
            b+=y[i];
            if(x[i]!=y[i]){
                j=1;
            }
            i++;
        }
    }
    
    if((j==0)&&(a==b)){
        printf("\nBoth the Strings are equal");
    }
    else if((j!=0)&&(a==b)){
        printf("\nBoth the strings are Anagram of each other");
    }
    else if(a>b){
        printf("\nString 1 is greater");
    }
    else{
        printf("\nString 2 is greater");
    }
return 0;
}