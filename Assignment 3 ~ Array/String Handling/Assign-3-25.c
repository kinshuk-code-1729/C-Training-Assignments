// Program to accept any string and count the total number of vowel and consonants
#include<stdio.h>
int main(){
    char s[20];
    int i=0,vow_count=0,cons_count=0;
    printf("Enter a String : ");
    gets(s);
    while(s[i]!='\0'){
        if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90)){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
                vow_count++;
            }
            else{
                cons_count++;
            }
        }
        i++;
    }
    printf("\nTotal no. of vowels = %d",vow_count);
    printf("\nTotal no. of consonants = %d",cons_count);
return 0;
}