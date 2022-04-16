/* WAP to accept two strings and print in following format
Enter String : Monalisa
M
Mo
Mon
Mona
Monal
Monali
Monalis
Monalisa */
#include<stdio.h>
int main(){
    int i,j,l=0;
    char c[10];
    printf("Enter a string : ");
    gets(c);
    while(c[l]!='\0'){
        l++;
    }
    for(i=0;i<=l;i++){
        for(j=0;j<i;j++){
            printf("%c",c[j]);
        }
        printf("\n");
    }
return 0;
}