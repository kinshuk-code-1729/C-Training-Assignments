// Program to check entered string is palindrome or not, without using library functions
#include<stdio.h>
int main(){
    char m[20];
    int i=0,j,k=0,l,c;
    printf("Enter a String : ");
    gets(m);
    while(m[k]!='\0'){
        k++;
    }
    l=k-1;
    while(i<l){
    if(m[i]!=m[l]){
      c=1;
      break;
    }
    else i++;
    l--;
  }
    if(c==1){
        printf("\n%s is not a palindrome string",m);
    }
    else{
        printf("\n%s is a palindrome string",m);  
    }
return 0;
}