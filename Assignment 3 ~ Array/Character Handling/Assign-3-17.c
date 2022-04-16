// Program to accept any alphabet and change its case.( there are no change other character)
#include<stdio.h>
#include<conio.h>
int main(){
char c,d;
printf("Enter any alphabet : ");
c=getche();
if(c>=65 && c<=90){
    d=c+32;
    printf("\nLowercase of \'%c\' is \'%c\'",c,d);
}
else if(c>=97 && c<=122){
    d=c-32;
    printf("\nUppercase of \'%c\' is \'%c\'",c,d);
}
else printf("\n\'%c\' is not an english alphabet",c);
return 0;
}