// Program to accept any string and change in Proper case
#include<stdio.h>
int main(){
    char cs[20];
    int k=0,i=0;
    printf("Enter any string : ");
    gets(cs);
    while(cs[k]!='\0'){
        k++;
    }
    while(i<k){
        if((i==0 && cs[i]!=' ') || (cs[i]!=' ' && cs[i-1]==' ')){
            if(cs[i]>=97 && cs[i]<=122){
                cs[i]=cs[i]-32;
            }
        }
        else if(cs[i]>=65 && cs[i]<=90){
            cs[i]=cs[i]+32;
        }
        i++;
    }
    printf("\n%s",cs);
return 0;
}