// Program to Check whether a character is an alphabet or not
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter any character : ");
    ch=getche();
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=192)){
        printf("\n\'%c\' is an english alphabet",ch);
    }
    else{
        printf("\n\'%c\' is not an english alphabet",ch);
    }
    return 0;
}