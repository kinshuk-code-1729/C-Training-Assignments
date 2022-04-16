// Program to accept any string and print vertically
#include<stdio.h>
int main(){
    char a[30];
    int i=0;
    printf("Enter a string : ");
    gets(a);
    while(a[i]!='\0'){
        printf("%c\n",a[i]);
        i++;
    }
return 0;
}