// Program to check whether a number is prime, Armstrong or perfect number using functions
#include<stdio.h>
int primechk(int x){
    int i,z=0;
    for(i=2;i<=x/2;i++){
        if(!(x%i)){
            z=1;
            break;
        }
    }
    return (!z);
}
int armstrongchk(int x){
    int s=0,y,r;
    y=x;
    while(x!=0){
        r=x%10;
        s+=r*r*r;
        x/=10;
    }
    return (s==y);    
}
int perfectchk(int x){
    int s=0,i,y;
    y=x;
    for(i=1;i<x;i++){
        if(x%i==0){
            s+=i;
        }
    }
    return (y==s);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(primechk(n)){
        printf("\n%d is a Prime number",n);
    }
    else{
        printf("\n%d is not a Prime number",n);
    }
    if(armstrongchk(n)){
        printf("\n%d is an Armstrong number",n);
    }
    else{
        printf("\n%d is not an Armstrong number",n);
    }
    if(perfectchk(n)){
        printf("\n%d is a Perfect number",n);
    }
    else{
        printf("\n%d is not a Perfect number",n);
    }
    return 0;
}