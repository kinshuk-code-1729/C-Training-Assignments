// Program to accept any string and print in reverse order
#include<stdio.h>
int main(){
    char m[20];
    int i,j,k=0;
    printf("Enter a String : ");
    gets(m);
    while(m[k]!='\0'){
        k++;
    }
    for(i=0,j=k-1;i<j;i++,j--){
        m[i]=m[i]+m[j];
        m[j]=m[i]-m[j];
        m[i]=m[i]-m[j];
    }
    printf("\nReversed String is \'%s\'",m);
return 0;
}