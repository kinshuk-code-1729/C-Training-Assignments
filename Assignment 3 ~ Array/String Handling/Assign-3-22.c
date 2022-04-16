// Program to accept any string and calculate its length
#include<stdio.h>
int main(){
    char x[20];
    int i=0;
    printf("Enter any string : ");
    gets(x);
    while(x[i]!='\0'){
        i++;
    }
    printf("\nLength of \'%s\' is %d",x,i);
return 0;
}