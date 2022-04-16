// Program to accept one paragraph and calculate the total no. of characters and words
#include<stdio.h>
int main(){
    char s[20];
    int i=0,char_count=0,word_count=1;
    printf("Enter a string : ");
    gets(s);
    while(s[i]!='\0'){
        if(s[i]!=' '){
            char_count++;
        }
        if((s[i]==' ') && (s[i+1]!=' ')){
            word_count++;
        }
        i++;
    }
    printf("\nTotal no. of characters = %d",char_count);
    printf("\nTotal no. of words = %d",word_count);
return 0;
}