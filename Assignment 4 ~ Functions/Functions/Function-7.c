// Program to print all strong numbers between given interval using functions
#include<stdio.h>
int factorial(int num){
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int strongchk(int x){
    int rem,f,s=0,y;
    y=x;
    while(x!=0){
        rem=x%10;
        f=factorial(rem);
        s+=f;
        x/=10;
    }
    return (s==y);
}
int all_strongs(int m,int n){
    printf("\nAll the strong numbers between %d and %d are.....\n",m,n);
    while(m<=n){
        if(strongchk(m)){
            printf("%d\t",m);
        }
        m++;
    }
    return m;
}
int main(){
    int high,low;
    printf("Enter the Extreme Limits (upper & lower) : ");
    scanf("%d%d",&low,&high);
    all_strongs(low,high);
return 0;
}